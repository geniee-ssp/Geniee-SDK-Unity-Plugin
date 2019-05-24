
#import <GNAdSDK/GNAdView.h>
#import "GNAdTransparentView.h"
#import "GNAdViewUnityController.h"

#define BANNER_REFRESH_RATE 30

extern UIViewController* UnityGetGLViewController();
extern UIView* UnityGetGLView();

@implementation GNAdViewUnityController

@synthesize position;

static GNAdViewUnityController *instance = nil;

static GNAdView *_adView;

typedef struct AdSizeInfo {
    GNAdSizeType adSizeType;
    int width;
    int height;
} AdSizeInfo_s;

static const AdSizeInfo_s adSizeList[13] = {
    {GNAdSizeTypeXSmall,   320,  48 },
    {GNAdSizeTypeSmall,    320,  50 },
    {GNAdSizeTypeTall,     300,  250},
    {GNAdSizeTypeLarge,    728,  90 },
    {GNAdSizeTypeW468H60,  468,  60 },
    {GNAdSizeTypeW120H600, 120,  600},
    {GNAdSizeTypeW160H600, 160,  600},
    {GNAdSizeTypeW320H100, 320,  100},
    {GNAdSizeTypeW57H57,   57,   57 },
    {GNAdSizeTypeW76H76,   76,   76 },
    {GNAdSizeTypeW480H32,  480,  32 },
    {GNAdSizeTypeW768H66,  768,  66 },
    {GNAdSizeTypeW1024H66, 1024, 66 }
};

static const int defaultAdSizeIdx = 1;


+ (void)installAdMob:(NSString *)adMobID
            position:(int)position
              adSize:(int)intAdSize
         logPriority:(int)intLogPriority
{
    if (instance != nil) return;

    if (intAdSize < 0 && intAdSize < (sizeof(adSizeList) / sizeof(adSizeList[0]))) {
        intAdSize = defaultAdSizeIdx;
    }
    GNAdSizeType adSizeType = adSizeList[intAdSize].adSizeType;
    CGSize adSize =
            CGSizeMake(adSizeList[intAdSize].width, adSizeList[intAdSize].height);
    
    // Initializes a GNAdView and sets it to the specified frame, size type, and SSP_ZoneID
    _adView = [[[GNAdView alloc] initWithFrame:CGRectMake(0, 0, adSize.width, adSize.height) adSizeType:adSizeType appID:adMobID] autorelease];
    
    // debug level
    if (intLogPriority == 0) {
        [_adView setGNAdlogPriority:GNLogPriorityNone];
    }
    else if (intLogPriority == 1) {
        [_adView setGNAdlogPriority:GNLogPriorityInfo];
    }
    else if (intLogPriority == 2) {
        [_adView setGNAdlogPriority:GNLogPriorityWarn];
    }
    else if (intLogPriority == 3) {
        [_adView setGNAdlogPriority:GNLogPriorityError];
    }
    
    // Init
    GNAdViewUnityController *adViewController = [[GNAdViewUnityController alloc] init];
    instance = adViewController;
    
    // Unity View
    UIViewController *rootViewController = UnityGetGLViewController();
    UIView *rootView = UnityGetGLView();
    
    // Add Ad Base View
    adViewController.view = [[[GNAdTransparentView alloc] init] autorelease];
    adViewController.position = position;
    adViewController.view.frame = rootView.bounds;
    adViewController.view.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [rootView addSubview:adViewController.view];
    
    // delegate object
    _adView.delegate = (id<GNAdViewDelegate>)adViewController;
    _adView.rootViewController = rootViewController;
    
    // Add AdView
    [adViewController layoutAdView:adSize];
    
    adViewController._adViewwwww = _adView;
    [adViewController.view addSubview:_adView];

    // Start automatically refreshing banner ads
    [_adView startAdLoop];
}

- (void)layoutAdView:(CGSize)adSize
{
    CGRect rootBounds = self.view.bounds;
    CGRect frame;
    int autoresizingMask = 0;
    
    frame.size = adSize;
    
    // x layout
    switch (position) {
        case AdPositionTop:
        case AdPositionBottom:
            frame.origin.x = (rootBounds.size.width - adSize.width) / 2;
            autoresizingMask += UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleRightMargin;
            break;
        case AdPositionTopLeft:
        case AdPositionBottomLeft:
            frame.origin.x = 0;
            autoresizingMask += UIViewAutoresizingFlexibleRightMargin;
            break;
        case AdPositionTopRight:
        case AdPositionBottomRight:
            frame.origin.x = 0;
            autoresizingMask += UIViewAutoresizingFlexibleLeftMargin;
            break;
    }
    
    // y layout
    switch (position) {
        case AdPositionTop:
        case AdPositionTopLeft:
        case AdPositionTopRight:
            frame.origin.y = 0;
            autoresizingMask += UIViewAutoresizingFlexibleBottomMargin;
            break;
        case AdPositionBottom:
        case AdPositionBottomLeft:
        case AdPositionBottomRight:
            frame.origin.y = rootBounds.size.height - adSize.height;
            autoresizingMask += UIViewAutoresizingFlexibleTopMargin;
            break;
    }
   
    _adView.frame = frame;
    _adView.autoresizingMask = autoresizingMask;
}

- (id)init {
	self = [super init];
	if (self != nil) {
        testDeviceIDs = [[NSMutableArray alloc] init];
	}
	return self;
}

- (void)addTestDeviceID:(NSString *)testDeviceID
{
    [testDeviceIDs addObject:testDeviceID];
}

- (void)showAd
{
    self._adViewwwww.hidden = NO;
}

- (void) hideAd{
    self._adViewwwww.hidden = YES;
}

- (void)refreshBanner
{

}

#if 0
- (void)adView:(GADBannerView *)view didFailToReceiveAdWithError:(GADRequestError *)error {
    NSLog(@"%@", error);
 //   [NSTimer scheduledTimerWithTimeInterval:BANNER_REFRESH_RATE target:self selector:@selector(refreshBanner) userInfo:nil repeats:NO];
}
#endif

- (void)dealloc
{
//    instance = nil;
    _adView.delegate = nil;
    [_adView releaseAdViews];
    _adView = nil;
    [super dealloc];
}

@end

extern "C" {
    void installAdMobIOS_(char *adMobID,
                          int position,
                          int size,
                          int log_pri);
    void addTestDeviceIDIOS_(char *deviceID);
    void hideAdIOS_();
    void showAdIOS_();
    void refreshAdIOS_();
    void releaseAdMobIOS_();
    bool isIpadAdMob_();
}

void installAdMobIOS_(char *adID,
                      int position,
                      int size,
                      int log_pri)
{
    NSString *strID = [NSString stringWithCString:adID
                                         encoding:NSASCIIStringEncoding];
    
    [GNAdViewUnityController installAdMob:strID
                             position:position
                             adSize:size
                             logPriority:log_pri];
}

void addTestDeviceIDIOS_(char *deviceID)
{
    if(instance != nil){
  //      [instance addTestDeviceID:[NSString stringWithCString:deviceID encoding:NSASCIIStringEncoding]];
    }
}

void hideAdIOS_(){
    if(instance != nil){
        [instance hideAd];
    }
}

void showAdIOS_(){
    if(instance != nil){
        [instance showAd];
    }
}

void refreshAdIOS_(){
    if(instance != nil){
        [instance refreshBanner];
    }
}

void releaseAdMobIOS_(){
    if(instance != nil){
      //  [instance release];
    }
}

bool isIpadAdMob_(){
    if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone){
        return false;
	}else if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad){
        return true;
	}
    return false;
}

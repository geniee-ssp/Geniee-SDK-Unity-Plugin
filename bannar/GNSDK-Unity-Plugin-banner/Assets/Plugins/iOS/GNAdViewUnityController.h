#import <UIKit/UIKit.h>
extern "C" {
#import <GNAdSDK/GNAdView.h>
}
@interface GNAdViewUnityController : UIViewController
{
    
    
   // GNAdView *_adViewwwww;
    
 //   GADBannerView *bannerView;
    NSMutableArray *testDeviceIDs;
    int position;
}

+ (void) installAdMob:(NSString *) unitID position:(int)position;
- (void) addTestDeviceID:(NSString *) testDeviceID;
- (void) hideAd;
- (void) showAd;
- (void) refreshBanner;
- (void) layoutAdView:(CGSize) adSize;

//@property(nonatomic, strong) GADBannerView *bannerView;
@property(nonatomic, strong) GNAdView *_adViewwwww;

@property(assign) int position;

enum _AdPosition{
    AdPositionTop,
    AdPositionBottom,
    AdPositionTopLeft,
    AdPositionTopRight,
    AdPositionBottomLeft,
    AdPositionBottomRight
};

@end


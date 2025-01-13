#import "GNSUObjectCache.h"

@implementation GNSUObjectCache

+ (instancetype)sharedInstance {
  static GNSUObjectCache *sharedInstance;
  static dispatch_once_t onceToken;
  dispatch_once(&onceToken, ^{
    sharedInstance = [[self alloc] init];
  });
  return sharedInstance;
}

- (id)init {
  self = [super init];
  if (self) {
    _references = [[NSMutableDictionary alloc] init];
  }
  return self;
}

@end

@implementation NSObject (GNSUOwnershipAdditions)

- (NSString *)gnsu_referenceKey {
  return [NSString stringWithFormat:@"%p", (void *)self];
}

@end

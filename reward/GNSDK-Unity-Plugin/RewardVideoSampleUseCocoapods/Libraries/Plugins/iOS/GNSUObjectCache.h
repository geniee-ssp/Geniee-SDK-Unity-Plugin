@import Foundation;

@interface GNSUObjectCache : NSObject

+ (instancetype)sharedInstance;

@property(nonatomic, strong) NSMutableDictionary *references;

@end

@interface NSObject (GNSUOwnershipAdditions)

- (NSString *)gnsu_referenceKey;

@end

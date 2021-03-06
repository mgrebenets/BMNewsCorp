#import "_BMAction.h"

@import CoreLocation;

@interface BMAction : _BMAction {}
// Custom logic goes here.
+ (NSDictionary*)mappingDictionary;
- (CLProximity)proximity;
- (BOOL) shouldFireForProximity:(CLProximity)proximity;

- (void)resetActivationCount;

@property(nonatomic, assign) BOOL persists;

@end

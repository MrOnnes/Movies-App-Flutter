
//
// StyleDictionaryProperties.h
//

// Do not edit directly
// Generated on Mon, 19 Sep 2022 06:57:27 GMT


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface StyleDictionaryProperties : NSObject

+ (NSDictionary *)properties;
+ (NSDictionary *)getProperty:(NSString *)keyPath;
+ (nonnull)getValue:(NSString *)keyPath;

@end

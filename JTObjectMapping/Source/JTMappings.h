/*
 * This file is part of the JTObjectMapping package.
 * (c) James Tang <mystcolor@gmail.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <Foundation/Foundation.h>


@protocol JTMappings <NSObject>

- (NSString *)key;
- (NSDictionary *)mapping;
- (Class)targetClass;

@end



@interface JTMappings : NSObject <JTMappings>

@property (nonatomic) NSString *key;
@property (nonatomic) NSDictionary *mapping;
@property (nonatomic, weak) Class targetClass;

+ (id <JTMappings>)mappingWithKey:(NSString *)aKey
                      targetClass:(Class)aClass
                          mapping:(NSDictionary *)aMapping;

@end

//
//  JTUserTest.h
//  JTObjectMapping
//
//  Created by james on 9/6/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JTSocialNetworkTest;

@interface JTUserTest : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSNumber *age;
@property (nonatomic, copy) NSString *null;
@property (nonatomic) NSDate *createDate;
@property (nonatomic) NSArray *childs;
@property (nonatomic) NSArray *users;

@property (nonatomic, copy) NSString *autoString;
@property (nonatomic) NSArray *autoArray;
@property (nonatomic) NSArray *nestedArray;
//@property (nonatomic, retain) JTSocialNetworkTest *autoSocialNetwork;

@property (nonatomic) JTSocialNetworkTest *socialNetwork;

@end

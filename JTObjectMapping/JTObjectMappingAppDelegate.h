//
//  JTObjectMappingAppDelegate.h
//  JTObjectMapping
//
//  Created by james on 9/6/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JTObjectMappingViewController;

@interface JTObjectMappingAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic) IBOutlet UIWindow *window;

@property (nonatomic) IBOutlet JTObjectMappingViewController *viewController;

@end

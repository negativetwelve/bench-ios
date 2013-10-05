//
//  BPAppDelegate.h
//  Bench
//
//  Created by Mark Miyashita on 10/5/13.
//  Copyright (c) 2013 Mark Miyashita. All rights reserved.
//

// Libraries
#import <UIKit/UIKit.h>

// BaseClasses
#import "BPTabBarController.h"

// Views
#import "BPUserProfileNavigationController.h"
#import "BPUserProfileViewController.h"

@interface BPAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) BPTabBarController *tabBarController;

@end

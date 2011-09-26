//
//  tempgitAppDelegate.h
//  tempgit
//
//  Created by wpengxu on 11-9-26.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class tempgitViewController;

@interface tempgitAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet tempgitViewController *viewController;

@end

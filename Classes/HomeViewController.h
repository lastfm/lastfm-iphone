//
//  HomeViewController.h
//  MobileLastFM
//
//  Created by Sam Steele on 11/17/10.
//  Copyright 2010 Last.fm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ProfileViewController.h"
#import "EventsTabViewController.h"
#import "RadioListViewController.h"
#import "FriendsViewController.h"
#import "RecsViewController.h"
#import "SearchTabViewController.h"

@interface HomeViewController : UITabBarController<UITabBarControllerDelegate> {
	NSString *_username;
}
-(id)initWithUsername:(NSString *)user;

@end

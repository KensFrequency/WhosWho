//
//  ProfileDetailTableViewController.h
//  Who's Who
//
//  Created by Ken Boucher on 10/05/2014.
//  Copyright (c) 2014 Ken Boucher. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Profile;

@interface ProfileDetailTableViewController : UITableViewController

@property (strong, nonatomic) Profile *profile;

@end

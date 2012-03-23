//
//  itDetailViewController.h
//  iPhoneTutorial
//
//  Created by Drew Schatt on 3/22/12.
//  Copyright (c) 2012 Schatt.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface itDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

//
//  itMasterViewController.h
//  iPhoneTutorial
//
//  Created by Drew Schatt on 3/22/12.
//  Copyright (c) 2012 Schatt.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class itDetailViewController;

#import <CoreData/CoreData.h>

@interface itMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) itDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end

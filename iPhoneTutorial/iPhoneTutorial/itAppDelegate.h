//
//  itAppDelegate.h
//  iPhoneTutorial
//
//  Created by Drew Schatt on 3/22/12.
//  Copyright (c) 2012 Schatt.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface itAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end

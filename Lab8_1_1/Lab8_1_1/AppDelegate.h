//
//  AppDelegate.h
//  Lab8_1_1
//
//  Created by Arseny Cheb on 19.05.17.
//  Copyright (c) 2017 Arseny Cheb. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
-(NSArray*)getAllFlights;
- (NSURL *)applicationDocumentsDirectory;


@end


//
//  AppDelegate.h
//  Lab8_task2
//
//  Created by Arseny Cheb on 18.05.17.
//  Copyright © 2017 Arseny Cheb. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


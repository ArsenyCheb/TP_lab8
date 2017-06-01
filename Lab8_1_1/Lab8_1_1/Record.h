//
//  Record.h
//  Lab8_1_1
//
//  Created by Arseny Cheb on 19.05.17.
//  Copyright (c) 2017 Arseny Cheb. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Record : NSManagedObject

@property (nonatomic, retain) NSString * aviaCompany;
@property (nonatomic, retain) NSString * cityFrom;
@property (nonatomic, retain) NSString * cityTo;
@property (nonatomic, retain) NSNumber * price;

@end

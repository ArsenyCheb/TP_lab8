//
//  ViewController.h
//  Lab8_1_1
//
//  Created by Arseny Cheb on 19.05.17.
//  Copyright (c) 2017 Arseny Cheb. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MapKit/MapKit.h"

@interface ViewController : UIViewController <UITextFieldDelegate>
@property (strong, nonatomic) IBOutlet MKMapView *map;
@property (weak, nonatomic) IBOutlet UITextField *cityTo;
@property (weak, nonatomic) IBOutlet UITextField *cityFrom;

- (IBAction)showFlights:(id)sender;
- (IBAction)isCityFrom:(id)sender;
- (IBAction)isCityTo:(id)sender;


@end


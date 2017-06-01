//
//  ViewController.m
//  Lab8_task2
//
//  Created by Arseny Cheb on 18.05.17.
//  Copyright © 2017 Arseny Cheb. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UITextField *loginTF;
@property (weak, nonatomic) IBOutlet UITextField *emailTF;
@property (weak, nonatomic) IBOutlet UITextField *passwordTF;
@property (weak, nonatomic) IBOutlet UITextField *repeatTF;
@property (weak, nonatomic) IBOutlet UIButton *registrB;
@property (weak, nonatomic) IBOutlet UIView *regView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [_regView setHidden:YES];
    NSUserDefaults *user = [NSUserDefaults standardUserDefaults];
    
   if ([user objectForKey:@"login"] != nil && [user objectForKey:@"pass"] != nil){
        [self performSegueWithIdentifier:@"closeZone" sender:self];
    }
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)segment:(id)sender {
    UISegmentedControl *seg = (UISegmentedControl *)sender;
    NSInteger select = seg.selectedSegmentIndex;
    
    if (select == 0){
        [[self regView]setHidden:YES];
    }
    else{
        [[self regView]setHidden:NO];
    }
}

- (IBAction)loginButton:(id)sender {
    if (![_loginTF.text isEqualToString:@""] && ![_passwordTF.text isEqualToString:@""]){
        NSUserDefaults *user = [NSUserDefaults standardUserDefaults];
        [user setObject:_loginTF.text forKey:@"login"];
        [user setObject:_passwordTF.text forKey:@"pass"];
       [self performSegueWithIdentifier:@"closeZone" sender:self];
        }
    }

@end

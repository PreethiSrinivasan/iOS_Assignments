
//
//  main.m
//  Database_assignment
//
//  Created by Karthik Ravikumar on 9/21/17.
//  Copyright © 2017 Apple inc. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <sqlite3.h>

@interface DatabaseViewController : UIViewController

@property (strong, nonatomic) NSString *databasePath;
@property (nonatomic) sqlite3 *contactDB;
@property (weak, nonatomic) IBOutlet UITextField *name;
@property (weak, nonatomic) IBOutlet UITextField *address;
@property (weak, nonatomic) IBOutlet UITextField *phone;
@property (weak, nonatomic) IBOutlet UILabel *status;
@property (strong, nonatomic) IBOutlet UITextField *location;
@property (strong, nonatomic) IBOutlet UITextField *email_id;

- (IBAction)saveData:(id)sender;
- (IBAction)findContact:(id)sender;
- (IBAction)clearFields:(id)sender;

@end

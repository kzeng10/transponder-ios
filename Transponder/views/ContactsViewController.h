//
//  ContactsViewController.h
//  Transponder
//
//  Created by Jacob Banks on 1/24/15.
//  Copyright (c) 2015 Jack Cook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "APAddressBook.h"
#import "APContact.h"
#import "Common.h"

@interface ContactsViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) NSMutableArray *emergencyContacts;
@property (strong, nonatomic) NSArray *retrievedContacts;

@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end

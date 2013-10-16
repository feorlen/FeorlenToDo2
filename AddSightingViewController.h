//
//  AddSightingViewController.h
//  BirdWatching
//
//  Created by Feorlen on 10/16/13.
//  Copyright (c) 2013 Feorlen.org. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSighting;

@interface AddSightingViewController : UITableViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *BirdNameInput;
@property (weak, nonatomic) IBOutlet UITextField *LocationInput;
@property (strong, nonatomic) BirdSighting *birdSighting;

@end

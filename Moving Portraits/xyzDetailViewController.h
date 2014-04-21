//
//  xyzDetailViewController.h
//  Moving Portraits
//
//  Created by Rose Swan on 4/20/14.
//  Copyright (c) 2014 Rose Swan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface xyzDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

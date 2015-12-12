//
//  DetailViewController.h
//  FabricTest
//
//  Created by Jeffrey Lee on 12/11/15.
//  Copyright © 2015 Jeffrey Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


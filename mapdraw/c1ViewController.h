//
//  c1ViewController.h
//  EXxingbake
//
//  Created by admin on 12-7-26.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface c1ViewController : UIViewController{
    IBOutlet UIView *iview;
    IBOutlet UILabel *label;
    NSString *imgstr;
}

@property(nonatomic,retain)NSString *imgstr;
@property(nonatomic,retain)IBOutlet UIView *iview;

@end

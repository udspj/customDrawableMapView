//
//  dView.h
//  mapdraw
//
//  Created by admin on 12-9-11.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface dView : UIView{
    void *data;
    CGContextRef context;
    BOOL candraw;
}

@end

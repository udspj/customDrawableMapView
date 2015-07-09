//
//  poimark.m
//  EXxingbake
//
//  Created by admin on 12-7-25.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "poimark.h"

@implementation poimark

@synthesize coordinate,subtitle,title,headimage,tag;

-(id)initWithCoords:(CLLocationCoordinate2D) coords{
    self = [super init];
    if (self != nil) {
        coordinate = coords;
    }
    return self;   
}
//- (CLLocationCoordinate2D)coordinate;
//{
//    CLLocationCoordinate2D theCoordinate;
//    theCoordinate.latitude = 31.21;
//    theCoordinate.longitude = 121.47;
//    return theCoordinate; 
//}

@end

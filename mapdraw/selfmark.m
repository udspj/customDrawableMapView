//
//  selfmark.m
//  EXxingbake
//
//  Created by admin on 12-7-26.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "selfmark.h"

@implementation selfmark

@synthesize coordinate,subtitle,title;

-(id)initWithCoords:(CLLocationCoordinate2D) coords{
    self = [super init];
    if (self != nil) {
        coordinate = coords;
    }
    return self;   
}

@end

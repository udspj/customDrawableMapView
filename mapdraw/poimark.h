//
//  poimark.h
//  EXxingbake
//
//  Created by admin on 12-7-25.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface poimark : NSObject <MKAnnotation>{
    CLLocationCoordinate2D coordinate;   
    NSString *subtitle;   
    NSString *title;
    int tag;
}   

@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;   
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *headimage;
@property (nonatomic,assign) int tag;

-(id)initWithCoords:(CLLocationCoordinate2D) coords;   

@end 
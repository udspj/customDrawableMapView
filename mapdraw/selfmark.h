//
//  selfmark.h
//  EXxingbake
//
//  Created by admin on 12-7-26.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface selfmark : NSObject <MKAnnotation>{
    CLLocationCoordinate2D coordinate;   
    NSString *subtitle;   
    NSString *title;   
}   

@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;   
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *subtitle;

-(id)initWithCoords:(CLLocationCoordinate2D) coords;   

@end 

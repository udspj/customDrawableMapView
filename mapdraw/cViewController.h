//
//  cViewController.h
//  EXxingbake
//
//  Created by admin on 12-7-20.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#import "dView.h"

@interface cViewController : UIViewController <MKMapViewDelegate,CLLocationManagerDelegate,MKAnnotation>{
    IBOutlet MKMapView *mapview;
    IBOutlet UIButton *drawbtn;
    IBOutlet UILabel *tlabel;
    
    //IBOutlet dView *dv;
    dView *dv;
    
    CLLocationManager *locationManager;
    CLLocationCoordinate2D coordinate;
    MKCoordinateSpan span;
    MKCoordinateRegion region;
    
    NSMutableArray *arrla;
    NSMutableArray *arrlo;
    NSMutableArray *arrpoi;
    NSNumber *num;
    NSArray *arrtitle;
    NSArray *arrimg;
    
    int loopi;
    
    //CLLocationCoordinate2D libComPark[1000];
    MKPolygon *polLibcomPark;
    
    BOOL candraw;
    int count;
    NSMutableArray *drawarrla;
    NSMutableArray *drawarrlo;
    
    int di;
}

-(SEL)gotodetailmap:(NSString *)str;
-(IBAction)iscandrawshap:(id)sender;

@end

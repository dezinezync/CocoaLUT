//
//  LUT1DGraphView.h
//  Pods
//
//  Created by Greg Cotten on 5/1/14.
//
//

#import <Cocoa/Cocoa.h>
#import "CocoaLUT.h"
#import <SAMCubicSpline/SAMCubicSpline.h>

typedef NS_ENUM(NSInteger, LUT1DGraphViewInterpolation) {
    LUT1DGraphViewInterpolationLinear,
    LUT1DGraphViewInterpolationCubic
};

@interface LUT1DGraphView : NSView

@property (strong, nonatomic) LUT *lut;
@property (assign, nonatomic) LUT1DGraphViewInterpolation interpolation;

-(void)lutDidChange;

+(M13OrderedDictionary *)interpolationMethods;

@end

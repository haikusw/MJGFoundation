//
//  UIColor-MJGAdditions.h
//  MJGFoundation
//
//  Created by Matt Galloway on 24/12/2011.
//  Copyright (c) 2011 Matt Galloway. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (MJGAdditions)

- (UIColor*)blackOrWhiteContrastingColor;
- (float)luminosityDifference:(UIColor*)otherColor;

@end

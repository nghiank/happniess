//
//  FaceView.h
//  Happiness
//
//  Created by nghia on 9/4/13.
//  Copyright (c) 2013 nghia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FaceView : UIView

@property (nonatomic) CGFloat scale;
- (void)pinch:(UIPinchGestureRecognizer*) gesture;
@end

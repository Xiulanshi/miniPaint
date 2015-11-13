//
//  ViewController.h
//  MiniPaint
//
//  Created by Xiulan Shi on 11/9/15.
//  Copyright © 2015 Xiulan Shi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    CGPoint lastPoint;
    CGPoint moveBackTo;
    CGPoint currentPoint;
    CGPoint location;
    NSDate *lastClick;
    BOOL mouseSwiped;
    UIImageView *drawImage;
    UIImageView *frontImage;
}


@end


//
//  LHAnimationTool.h
//  AqaraHome
//
//  Created by 赵希帆 on 2018/5/29.
//  Copyright © 2018年 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import<UIKit/UIKit.h>

typedef enum{
    BOTTOM = 1001,
    UP = 1002,
    LEFT = 1003,
    RIGHT = 1004,
} DIRECTION;

@interface LHAnimationTool : NSObject

+(CABasicAnimation *)opacityTimes_Animation:(NSInteger)repeatTimes durTimes:(float)time toValue:(NSNumber *)toValue;
+(CABasicAnimation *)scale:(NSNumber *)Multiple orgin:(NSNumber *)orginMultiple durTimes:(float)time Rep:(float)repeatTimes; //缩放
+(CABasicAnimation *)scale:(NSNumber *)Multiple orgin:(NSNumber *)orginMultiple durTimes:(float)time delay:(float)delay Rep:(NSInteger)repeatTimes; // 缩放
+ (CABasicAnimation *)backgroundColor:(UIColor *)backgroundColor durTimes:(float)time delay:(CGFloat )delay Rep:(NSInteger)repeatTimes;
+(CABasicAnimation *)moveX:(float)time X:(NSNumber *)x; //横向移动
+(CABasicAnimation *)moveY:(float)time Y:(NSNumber *)y; //纵向移动
+(CAAnimationGroup *)groupAnimation:(NSArray *)animationAry durTimes:(float)time Rep:(float)repeatTimes; //组合动画
+(CABasicAnimation *)rotation:(float)dur degree:(float)degree direction:(int)direction repeatCount:(int)repeatCount; //旋转
+(CATransition *)FlipCAnimationFromLeft:(BOOL )boolUpDown;
+(CATransition *)PushCAnimationFromDirection:(DIRECTION )direction duration:(double)dur;
+(CATransition *)MoveInCAnimationFromDirection:(DIRECTION )direction duration:(double)dur;
+ (CATransition *) addPushAnimationFromBottom:(BOOL)isFromBottom;

@end

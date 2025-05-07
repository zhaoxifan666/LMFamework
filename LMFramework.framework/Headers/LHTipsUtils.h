//
//  LHTipsUtils.h
//  AqaraHome
//
//  Created by ayanami on 2017/11/22.
//  Copyright © 2017年 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LHTipsUtils : NSObject

// 显示loading框
+ (void)showLoading;
+ (void)showLoadingWithAllowUserInterface:(BOOL)isAllow;
+ (void)showLGTipsWithInfo:(NSString *)info;
///debug环境下显示文案
+ (void)showTipsInDebugEnv:(NSString *)info;
///设置toast消失的最长时间
+ (void)dismissWithDelay:(CGFloat)second;

// 显示带提示文案的loading框
+ (void)showLoadingWithTips:(NSString *)tips;

+(void)showLoadingWithText:(NSString *)text allowUserIterface:(BOOL)isAllow;

+ (void)showLoadingWithTips:(NSString *)tips allowUserInterface:(BOOL)isAllow;

+ (void)showTipsInfo:(NSString *)info;

+ (void)showTipsStatus:(NSString *)info;
+ (void)showTipsStatus:(NSString *)info allowUserInterface:(BOOL)isAllow;

//显示tips
+ (void)showError:(NSError *)error;
+ (void)showFailedTipsInfo:(NSString *)info;
+ (void)showSucceedTipsInfo:(NSString *)info;
+ (void)showTipsImage:(UIImage*)image info:(NSString *)info;
+ (void)showText:(NSString *)text;
+ (void)showText:(NSString *)text time:(NSTimeInterval)time allowUserInterface:(BOOL)isAllow;
+ (void)showProgress:(CGFloat)progress text:(NSString *)text;
+ (void)showProgress:(CGFloat)progress text:(NSString *)text userInterfaceEnabled:(BOOL)userInterfaceEnabled;

+ (void)hide;
+ (void)hideDuration:(NSTimeInterval)duration;
+ (void)updateText:(NSString *)text;
+ (void)setContainerView:(UIView *)view;
@end

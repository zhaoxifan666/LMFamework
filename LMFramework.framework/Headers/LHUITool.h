//
//  LHUITool.h
//  AqaraHome
//
//  Created by ayanami on 2017/11/20.
//  Copyright © 2017年 MadHeart. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-function"
typedef NS_ENUM(NSInteger, LHScreenType) {
    LHScreenType_w414h736_5_5_inch      = 0,    //5.5屏幕
    LHScreenType_w375h667_4_7_inch      ,       //4.7屏幕
    LHScreenType_w320h568_4_0_inch      ,       //4.0屏幕
    LHScreenType_w375h812_x_inch      ,       //iPhonex屏幕
    
};

@interface LHUITool : NSObject

/**
 根据屏幕宽高判断当前的手机类型
 
 @return return value description
 */
+ (LHScreenType)currentScreenType;
+ (id)screenAdjust5_5_inch:(id)inch5_5Value1 inch4_7:(id)inch4_7Value1 inch4_0:(id)inch4_0Value1;
+ (id)screenFullAdjust5_5_inch:(id)inch5_5Value1 inch4_7:(id)inch4_7Value1 inch4_0:(id)inch4_0Value1 inch_x:(id)inch_x_Value1;

+ (CGFloat)screenAdjust_CGFloat_5_5_inch:(CGFloat)inch5_5Value1 inch4_7:(CGFloat)inch4_7Value1 inch4_0:(CGFloat)inch4_0Value1;
+ (CGFloat)screenFullAdjust_CGFloat_5_5_inch:(CGFloat)inch5_5Value1 inch4_7:(CGFloat)inch4_7Value1 inch4_0:(CGFloat)inch4_0Value1 inch_x:(CGFloat)inch_x_Value1;

+ (CGFloat)tcc1080WidthScale:(CGFloat)originWidth;
+ (CGFloat)tcc1920HeightScale:(CGFloat)originHeight;
+ (CGFloat)tcc1080HeightScale:(CGFloat)originHeight;
+ (CGFloat)tcc1920WidthScale:(CGFloat)originWidth;



/**
 获取当前设备的系统默认的tabbar高度
 
 @return return value description
 */
+ (CGFloat)lhTarbarHeight;
/**
 非系统tabbar高度，3.0版本自定义tabbar高度
 
 @return return value description
 */
+ (CGFloat)lhCustomTarbarHeight;
/**
 获取当前设备的系统默认导航栏高度
 
 @return return value description
 */
+ (CGFloat)lhNavbarHeight;
/**
 获取当前手机的状态栏高度
 
 @return return value description
 */
+ (CGFloat)lhStatusbarHeight;

/**
 获取当前手机的导航栏和状态栏高度
 
 @return return value description
 */
+ (CGFloat)lhStatusNavHeight;
/**
 虚拟home键高度,ipx34, 其他手机返回0
 
 */
+ (CGFloat)lhHomeIndicatorHeight;

/**
 刘海高度,ipx24, 其他手机返回0
 
 */
+ (CGFloat)lhBangsHeight;

/// iPad 中左侧自定义Tabbar的宽度
+ (CGFloat)lhiPadTabBarWidth;

/// 在iPad中分屏控制器的宽度
+ (CGFloat)lhSplitControllerWidth;

/// 在iPad中分屏控制器中子控制器的宽度
+ (CGFloat)lhSplitChildWidth;

/// 判断是否在分屏控制器中
+ (BOOL)isIpadSplitViewWithVC:(UIViewController *)controller;
/// 判断是否在浮窗控制器中
+ (BOOL)isIpadFloatWindowWithVC:(UIViewController *)controller;
/**
 iOS11之后顶部的scrollview默认有偏移，需要区分系统版本以适配屏幕
 
 */
+ (void)lhAdjustScrollViewOffsetScrollView:(UIScrollView*)sv controller:(UIViewController*)controller;

+ (CGFloat)lhSmartCurrentViewWidthWithSuper:(id)superModel;
+ (CGFloat)lhSmartCurrentViewHeightWithSuper:(id)superModel;

+ (CGFloat)fixCollectionViewSlitWidth:(CGRect)expectFrame rowCount:(CGFloat)rowCount interitemSpacing:(CGFloat)interitemSpacing;

+ (NSAttributedString *)getTitleAttributedText:(NSString *)text  color:(UIColor *)color font:(UIFont *)font;

+ (NSAttributedString *)getTitleAttributedText:(NSString *)text  color:(UIColor *)color font:(UIFont *)font lineSpace:(CGFloat)lineSpace;

@end

extern id LH_id_ScreenAdjust(id inch5_5Value1,id inch4_7Value1,id inch4_0Value1);
extern id LH_id_ScreenFullAdjust(id inch5_5Value1,id inch4_7Value1,id inch4_0Value1, id inch_x_Value1);

extern CGFloat LH_CGFloat_ScreenAdjust(CGFloat inch5_5Value1,CGFloat inch4_7Value1,CGFloat inch4_0Value1);
extern CGFloat LH_CGFloat_ScreenFullAdjust(CGFloat inch5_5Value1,CGFloat inch4_7Value1,CGFloat inch4_0Value1, CGFloat inch_x_Value1);

#pragma clang diagnostic pop

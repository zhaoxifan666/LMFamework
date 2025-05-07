//
//  LMNavigationController.h
//  LMFramework
//
//  Created by Hao on 2021/12/3.
//  Copyright © 2021 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMNavigationController : UINavigationController

@end

@interface LMNavigationController (ModifyNavigationBarStyle)

/**
 系统默认的导航栏样式：半透明，灰色背景，灰色阴影
 */
- (void)resetNavigationBarStyle;

/**
 app默认的导航栏样式：半透明，白色背景，灰色阴影
 */
- (void)setDefaultNavigationBarStyle;

/**
 白背景，阴影，不透明
 */
- (void)setWhiteNavigationBarStyle;

/**
 app默认的导航栏样式：不透明，蓝色背景，灰色阴影
 */
- (void)setBlueNavigationBarStyle;

/**
 app默认的导航栏样式：半透明，白色背景，灰色阴影
 */
- (void)setDefaultNavigationBarStyleIsTranslucent;
/**
 app默认的导航栏样式：半透明，白色背景，无阴影
 */
- (void)setDefaultNavigationBarStyleIsTranslucentNoShadow;

/**
 全透明导航栏样式
 */
- (void)setTransparentNavigationBarStyle;


/**
 导航栏样式：不透明 白色背景，无阴影
 */
- (void)setSearchNavigationBarStyle;

/**
 自定义导航栏样式
 
 @param translucent 是否半透明
 @param backgroundColor 背景颜色
 @param shadowColor 阴影颜色
 */
- (void)setNavigationBarWithTranslucent: (BOOL)translucent backgroundColor: (UIColor *)backgroundColor shadowColor: (UIColor *)shadowColor;

/**
 自定义导航栏样式

 @param translucent 是否透明
 @param backgroundColor 背景颜色
 @param shadowImage 阴影图片
 */
- (void)setNavigationBarWithTranslucent: (BOOL)translucent backgroundColor: (UIColor *)backgroundColor shadowImage:(UIImage *)shadowImage;

/**
 自定义导航栏样式
 
 @param translucent 是否半透明
 @param backgroundImage 背景图片
 @param shadowImage 阴影图片
 */
- (void)setNavigationBarWithTranslucent: (BOOL)translucent backgroundImage: (UIImage *)backgroundImage shadowImage: (UIImage *)shadowImage;

@end


NS_ASSUME_NONNULL_END

//
//  UIViewController+LMFloatWindow.h
//  LMFramework
//
//  Created by 李童 on 2022/3/7.
//  Copyright © 2022 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kLMFloatWindowDefaultSize CGSizeMake(400, UIScreen.mainScreen.bounds.size.height - 88 * 2)

NS_ASSUME_NONNULL_BEGIN

@protocol LMFloatWindowDelegate <NSObject>

@optional
-(void)floatWindowViewDidDisappear;

@end

@interface UIViewController (LMFloatWindow) <LMFloatWindowDelegate>

#pragma mark - 模态弹出UIViewController
/// 使用默认的大小且背景可点击的模态方式弹出控制器
/// @param viewControllerToPresent 需要模态出的控制器
/// @param flag 是否使用动画
/// @param completion <#completion description#>
- (void)lm_presentViewController:(UIViewController *)viewControllerToPresent animated: (BOOL)flag completion:(void (^ __nullable)(void))completion;

/// 使用默认的大小模态弹出控制器
/// @param viewControllerToPresent 需要模态出的控制器
/// @param enable 是否启用点击背景自动消失
/// @param flag 是否使用动画
/// @param completion <#completion description#>
- (void)lm_presentViewController:(UIViewController *)viewControllerToPresent backgoundTapDismissEnable:(BOOL)enable animated: (BOOL)flag completion:(void (^ __nullable)(void))completion;

/// 背景默认不可点击
/// @param viewControllerToPresent 需要模态出的控制器
/// @param contentSize 显示内容的大小
/// @param flag 是否使用动画
/// @param completion <#completion description#>
- (void)lm_presentViewController:(UIViewController *)viewControllerToPresent contentSize:(CGSize)contentSize animated: (BOOL)flag completion:(void (^ __nullable)(void))completion;

/// 模态弹出全屏UIViewController
/// @param viewControllerToPresent  需要模态出的控制器
/// @param enable 是否启用点击背景自动消失
/// @param contentSize 显示内容的大小
/// @param flag 是否使用动画
/// @param completion <#completion description#>
- (void)lm_presentViewController:(UIViewController *)viewControllerToPresent backgoundTapDismissEnable:(BOOL)enable contentSize:(CGSize)contentSize animated: (BOOL)flag completion:(void (^ __nullable)(void))completion;


/// <#Description#>
/// @param viewControllerToPresent 需要模态出的控制器
/// @param flag <#flag description#>
/// @param completion <#completion description#>
- (void)lm_presentFullScreenViewController:(UIViewController *)viewControllerToPresent animated: (BOOL)flag completion:(void (^ __nullable)(void))completion;

#pragma mark - 模态弹出LHBaseNavigationController导航控制器，并设置RootViewController

/// 模态弹出LMBaseNavigationController导航控制器
/// @param root 导航根控制器
/// @param flag <#flag description#>
/// @param completion <#completion description#>
- (void)lm_presentToNavRootController:(UIViewController *)root animated: (BOOL)flag completion:(void (^ __nullable)(void))completion;


/// 模态弹出LMBaseNavigationController导航控制器
/// @param root 导航根控制器
/// @param enable 是否开启点击背景消失
/// @param flag <#flag description#>
/// @param completion <#completion description#>
- (void)lm_presentToNavRootController:(UIViewController *)root backgoundTapDismissEnable:(BOOL)enable animated: (BOOL)flag completion:(void (^ __nullable)(void))completion;

/// 模态弹出LMBaseNavigationController导航控制器
/// @param root 导航根控制器
/// @param contentSize 内容窗口大小
/// @param flag <#flag description#>
/// @param completion <#completion description#>
- (void)lm_presentToNavRootController:(UIViewController *)root contentSize:(CGSize)contentSize animated: (BOOL)flag completion:(void (^ __nullable)(void))completion;

/// 模态弹出LMBaseNavigationController导航控制器
/// @param root 导航根控制器
/// @param enable 是否开启点击背景消失
/// @param contentSize 内容窗口大小
/// @param flag <#flag description#>
/// @param completion <#completion description#>
- (void)lm_presentToNavRootController:(UIViewController *)root backgoundTapDismissEnable:(BOOL)enable contentSize:(CGSize)contentSize animated: (BOOL)flag completion:(void (^ __nullable)(void))completion;


/// 模态弹出全屏LMBaseNavigationController导航控制器
/// @param root <#root description#>
/// @param flag <#flag description#>
/// @param completion <#completion description#>
- (void)lm_presentToFullScreenNavRootController:(UIViewController *)root animated: (BOOL)flag completion:(void (^ __nullable)(void))completion;

#pragma mark - 模态弹出导航控制器，需要指定导航栏的子类和RootViewController

/// 模态弹出导航控制器
/// @param navClass 导航器类型
/// @param root 导航根控制器
/// @param flag <#flag description#>
/// @param completion <#completion description#>
- (void)lm_presentNavController:(Class)navClass rootController:(UIViewController *)root animated: (BOOL)flag completion:(void (^ __nullable)(void))completion;

/// 模态弹出导航控制器
/// @param navClass 导航器类型
/// @param root 导航根控制器
/// @param enable 是否开启点击背景消失
/// @param flag <#flag description#>
/// @param completion <#completion description#>
- (void)lm_presentNavController:(Class)navClass rootController:(UIViewController *)root backgoundTapDismissEnable:(BOOL)enable animated: (BOOL)flag completion:(void (^ __nullable)(void))completion;

/// 模态弹出导航控制器
/// @param navClass 导航器类型
/// @param root 导航根控制器
/// @param contentSize 内容窗口大小
/// @param flag <#flag description#>
/// @param completion <#completion description#>
- (void)lm_presentNavController:(Class)navClass rootController:(UIViewController *)root contentSize:(CGSize)contentSize animated: (BOOL)flag completion:(void (^ __nullable)(void))completion;

/// 模态弹出导航控制器
/// @param navClass 导航器类型
/// @param root 导航根控制器
/// @param enable 是否开启点击背景消失
/// @param contentSize 内容窗口大小
/// @param flag <#flag description#>
/// @param completion <#completion description#>
- (void)lm_presentNavController:(Class)navClass rootController:(UIViewController *)root backgoundTapDismissEnable:(BOOL)enable contentSize:(CGSize)contentSize animated: (BOOL)flag completion:(void (^ __nullable)(void))completion;

/// 模态弹出全屏导航控制器
/// @param navClass <#navClass description#>
/// @param root <#root description#>
/// @param flag <#flag description#>
/// @param completion <#completion description#>
- (void)lm_presentFullScreenNavController:(Class)navClass rootController:(UIViewController *)root animated: (BOOL)flag completion:(void (^ __nullable)(void))completion;

@end

NS_ASSUME_NONNULL_END

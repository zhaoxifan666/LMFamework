//
//  LHCustomPresentationController.h
//  AqaraHome
//
//  Created by lansc on 2022/3/14.
//  Copyright © 2022 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LHCustomPresentationController : UIPresentationController<UIViewControllerTransitioningDelegate>
//2

///点击背景消失回调
@property (nonatomic ,copy) void(^touchDismissCallback)(void);

@end


@interface UIViewController (presentSize)

@property (nonatomic ,assign) CGFloat presentWidth;
@property (nonatomic ,assign) CGFloat presentHeight;

///是否关闭触摸背景消失,默认NO,默认可点击背景消失弹窗
@property (nonatomic ,assign) BOOL disableTouchDismiss;

@end

NS_ASSUME_NONNULL_END

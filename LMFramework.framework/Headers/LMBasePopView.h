//
//  LMBasePopView.h
//  LMMeshDriverFramework
//
//  Created by 江顺金 on 2021/5/23.
//  Copyright © 2021 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMBasePopView : UIView<UIGestureRecognizerDelegate>

@property (nonatomic, assign) CGFloat cornerRadius;

@property (nonatomic, assign) CGFloat viewHeight;

@property (nonatomic, strong) UIView *contentView;

@property (nonatomic, assign) BOOL tapToDismiss; // 点击空白处是否自动消失，默认为YES

@property (nonatomic, copy) void(^tapToDismissAction)(void);

- (void)showInView:(UIView *)view;

- (void)showInWindow;

- (void)dismiss;

- (void)dismissWithAnimated:(BOOL)animated completion:(void(^)(void))completion;

- (void)changeLayerWithRoundedRect:(CGRect)roundedRect;

- (void)updateViewHeight:(CGFloat)viewHeight;

@end

NS_ASSUME_NONNULL_END

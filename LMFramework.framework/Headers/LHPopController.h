//
//  LHPopController.h
//  AqaraHome
//
//  Created by 江顺金 on 2020/4/3.
//  Copyright © 2020 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    LHPopControllerAlert,
    LHPopControllerActionSheet,          // iPad上会显示为.popover
    LHPopControllerPopover,
    LHPopControllerActionSheetPad,       // iPhone iPad 都显示 .actionSheet 样式
} LHPopControllerStyle;

typedef enum : NSUInteger {
    LMSplitColumnScreen,    // 全屏
    LMSplitColumnPrimary,   // 左边分屏
    LMSplitColumnSecondary, // 右边分屏
    LMSplitColumnCenter,    // 中间弹窗视图屏
} LMSplitColumn;

@interface LHPopController : UIPresentationController

@property (nonatomic, assign) LHPopControllerStyle popStyle;
@property (nonatomic, copy) void (^tapToDimiss)(void);
@property (nonatomic, assign) LMSplitColumn column; // 弹窗位置

- (void)updateKeyboard:(CGRect)frame;

@end

NS_ASSUME_NONNULL_END

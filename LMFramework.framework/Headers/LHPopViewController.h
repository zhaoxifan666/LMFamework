//
//  LHPopViewController.h
//  AqaraHome
//
//  Created by 江顺金 on 2020/4/3.
//  Copyright © 2020 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LHPopController.h"

NS_ASSUME_NONNULL_BEGIN

@interface LHPopViewController : UIViewController

@property (nonatomic, assign) CGFloat cornerRadius;
@property (nonatomic, assign) UIRectCorner corners;
@property (nonatomic, assign) LHPopControllerStyle popStyle;
@property (nonatomic, assign) BOOL tapToDismiss;
@property (nonatomic, assign) LMSplitColumn column; // 弹窗位置
@property (nonatomic, copy) void (^onDismiss)(void);
/// 点击空白小时
@property (nonatomic, copy) void (^bgTapDismiss)(void);
 
@end

NS_ASSUME_NONNULL_END

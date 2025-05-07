//
//  UITextView+LHPlaceHolder.h
//  AqaraHome
//
//  Created by 赵希帆 on 2019/2/27.
//  Copyright © 2019 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextView (LHPlaceHolder)

/**
 *  UITextView+placeholder
 */
@property (nonatomic, copy) NSString *lh_placeHolder;
/**
 *  IQKeyboardManager等第三方框架会读取placeholder属性并创建UIToolbar展示
 */
@property (nonatomic, copy) NSString *placeholder;
/**
 *  placeHolder颜色
 */
@property (nonatomic, strong) UIColor *lh_placeHolderColor;

@property (nonatomic, copy) void (^textViewDidChangeBlock)(void);

- (void)updatePlaceHolder;

@end

NS_ASSUME_NONNULL_END



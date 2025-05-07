//
//  UIButton+Swizzling.h
//  AqaraHome
//
//  Created by 赵希帆 on 2018/6/6.
//  Copyright © 2018年 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
// 定义一个枚举（包含了四种类型的button）
typedef NS_ENUM(NSUInteger, LHButtonEdgeInsetsStyle) {
    LHButtonEdgeInsetsStyleTop, // image在上，label在下
    LHButtonEdgeInsetsStyleLeft, // image在左，label在右
    LHButtonEdgeInsetsStyleBottom, // image在下，label在上
    LHButtonEdgeInsetsStyleRight, // image在右，label在左
    LHButtonEdgeInsetsStyleAligmentLeft,    //image,label都在左边
};

@interface UIButton (LMAddition)

/**
 自定义响应边界 UIEdgeInsetsMake(-3, -4, -5, -6). 表示扩大
 例如： self.btn.hitEdgeInsets = UIEdgeInsetsMake(-3, -4, -5, -6);
 */
@property(nonatomic, assign) UIEdgeInsets hitEdgeInsets;


/**
 自定义响应边界 自定义的边界的范围 范围扩大3.0
 例如：self.btn.hitScale = 3.0;
 */
@property(nonatomic, assign) CGFloat hitScale;

/*
 自定义响应边界 自定义的宽度的范围 范围扩大3.0
 例如：self.btn.hitWidthScale = 3.0;
 */
@property(nonatomic, assign) CGFloat hitWidthScale;

/*
 自定义响应边界 自定义的高度的范围 范围扩大3.0
 例如：self.btn.hitHeightScale = 3.0;
 */
@property(nonatomic, assign) CGFloat hitHeightScale;
    
/**
 按钮点击响应时间间隔
 */
@property (nonatomic, assign) NSTimeInterval eventInterval;


/**
 *  设置button的titleLabel和imageView的布局样式，及间距
 *
 *  @param style titleLabel和imageView的布局样式
 *  @param space titleLabel和imageView的间距
 */
- (void)layoutButtonWithEdgeInsetsStyle:(LHButtonEdgeInsetsStyle)style
                        imageTitleSpace:(CGFloat)space;


@end


@interface UIButton (ControlState)

- (void)setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state;

@end

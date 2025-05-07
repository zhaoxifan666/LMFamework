//
//  UIView+LMLayout.h
//  LMFramework
//
//  Created by jeremy on 2021/4/26.
//  Copyright © 2021 ruie. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (LMLayout)

/** 对应Frame.Origin.X */
@property(nonatomic, assign)CGFloat x;

/** 对应Frame.Origin.Y */
@property(nonatomic, assign)CGFloat y;

/** 对应Frame.Size.Width */
@property(nonatomic, assign)CGFloat width;

/** 对应Frame.Size.Height */
@property(nonatomic, assign)CGFloat height;

/** 对应Center.X */
@property(nonatomic, assign)CGFloat centerX;

/** 对应Center.Y */
@property(nonatomic, assign)CGFloat centerY;

/// 对应view最右边的x轴坐标
@property (nonatomic) CGFloat right;

@property (nonatomic) CGSize  size;
@end

NS_ASSUME_NONNULL_END

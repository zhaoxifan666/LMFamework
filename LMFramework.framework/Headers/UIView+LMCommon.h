//
//  UIView+Common.h
//  Aqara
//
//  Created by Hao on 2017/12/29.
//  Copyright © 2017年 LumiUnited. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_OPTIONS(NSUInteger, UIBorderSideType) {
    UIBorderSideTypeAll  = 0,
    UIBorderSideTypeTop = 1 << 0,
    UIBorderSideTypeBottom = 1 << 1,
    UIBorderSideTypeLeft = 1 << 2,
    UIBorderSideTypeRight = 1 << 3,
};

@interface UIView (LMCommon)

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

- (void)setShadow;

- (UIColor *) colorOfPoint:(CGPoint)point;

- (UIView *)addBorderForColor:(UIColor *)color
                  borderWidth:(CGFloat)borderWidth
                   borderType:(UIBorderSideType)borderType;

+ (CALayer *)addShadowToView:(UIView *)view
                 withOpacity:(float)shadowOpacity
                shadowRadius:(CGFloat)shadowRadius
             andCornerRadius:(CGFloat)cornerRadius;

+ (CALayer *)addShadowToView:(UIView *)view
             withShadowColor:(UIColor *)shadowColor
                     opacity:(float)shadowOpacity
                shadowRadius:(CGFloat)shadowRadius
             andCornerRadius:(CGFloat)cornerRadius;

+ (CALayer *)addAnimationShadowToView:(UIView *)view
                     withOpacity:(float)shadowOpacity
                    shadowRadius:(CGFloat)shadowRadius
                 andCornerRadius:(CGFloat)cornerRadius withShadowLayer:(CALayer *)layer;

/**
 *  通过 CAShapeLayer 方式绘制虚线
 *
 *  param lineLength:     虚线的宽度
 *  param lineSpacing:    虚线的间距
 *  param lineColor:      虚线的颜色
 *  param lineDirection   虚线的方向  YES 为水平方向， NO 为垂直方向
 **/
- (void)drawLineOfDashByCAShapeLayerLineLength:(int)lineLength lineSpacing:(int)lineSpacing lineColor:(UIColor *)lineColor lineDirection:(BOOL)isHorizonal;


/**
 *  设置部分圆角(绝对布局)
 *
 *  @param corners 需要设置为圆角的角 UIRectCornerTopLeft | UIRectCornerTopRight | UIRectCornerBottomLeft | UIRectCornerBottomRight | UIRectCornerAllCorners
 *  @param radii   需要设置的圆角大小 例如 CGSizeMake(20.0f, 20.0f)
 */
- (void)addRoundedCorners:(UIRectCorner)corners
                withRadii:(CGSize)radii;

/**
 *  设置部分圆角(相对布局)
 *
 *  @param corners 需要设置为圆角的角 UIRectCornerTopLeft | UIRectCornerTopRight | UIRectCornerBottomLeft | UIRectCornerBottomRight | UIRectCornerAllCorners
 *  @param radii   需要设置的圆角大小 例如 CGSizeMake(20.0f, 20.0f)
 *  @param rect    需要设置的圆角view的rect
 */
- (void)addRoundedCorners:(UIRectCorner)corners
                withRadii:(CGSize)radii
                 viewRect:(CGRect)rect;

+ (UIImageView *)findNavLineView:(UIView *)view;

@end

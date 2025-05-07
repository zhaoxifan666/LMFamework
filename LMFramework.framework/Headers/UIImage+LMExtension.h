//
//  UIImage+Extension.h
//  Aqara
//
//  Created by 赵希帆 on 2018/1/10.
//  Copyright © 2018年 LumiUnited. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIImage (LMExtension)

+ (UIImage *)createImageWithColor:(UIColor *)color;
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

+ (UIImage *)createImageWithColor: (UIColor *)color height: (CGFloat)height;
+ (UIImage *)createImageWithColor: (UIColor *)color height: (CGFloat)height width: (CGFloat)width;

+ (UIImage *)createArcImageWithColor:(UIColor *)color withRadius:(CGFloat)radius;

+ (UIImage*)imageCornerWithRadius:(CGFloat)radius andCorners:(UIRectCorner)corners andSize:(CGSize)size andColor:(UIColor *)color;

+ (UIImage *)createConcentricCirclesImageWithOuterLayerColor:(UIColor *)outerLayerColor innerLayerColor:(UIColor *)innerLayerColor outerLayerDiameter:(CGFloat)outerLayerDiameter innerLayerDiameter:(CGFloat)innerLayerDiameter;

+ (UIImage *)ImageFromFrame:(CGSize)size borderColor:(UIColor *)color borderRadius:(CGFloat)radius borderWidth:(CGFloat)width;

- (void)yy_circleImageWithSize:(CGSize)size fillColor:(UIColor *)color completion:(void (^)(UIImage *image))completionBlock;

- (UIImage *)scaleToSize:(CGSize)size;
/**
 剪裁图片到指定尺寸（不失帧）

 @param size 目标大小
 @return 目标图片
 */
- (UIImage *)cutTargetImgSize:(CGSize)size;

- (UIImage *)cutImageinRect:(CGRect)rect;

/**
 改变图片颜色

 @param color 颜色值
 @return 改变颜色后的图片
 */
- (UIImage *)imageChangeColor:(UIColor *)color;

/// 修复图片方向
- (UIImage *)fixOrientation;
@end

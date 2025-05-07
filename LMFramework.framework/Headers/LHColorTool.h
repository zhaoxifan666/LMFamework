//
//  LHColorTool.h
//  AqaraHome
//
//  Created by MadHeart on 2017/11/21.
//  Copyright © 2017年 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MSColorUtils.h"

@interface LHColorTool : NSObject

+ (UIColor *)randomColor;

+ (UIColor* )colorWithRGB:(NSUInteger)rgb alpha:(CGFloat)alpha;
+ (UIColor* )colorWithRGB:(NSUInteger)rgb;
+ (UIColor *)colorWithR:(NSInteger)r g:(NSInteger)g b:(NSInteger)b alpha:(CGFloat)alpha;
+ (UIColor *)colorWithR:(NSInteger)r g:(NSInteger)g b:(NSInteger)b;
+ (UIColor *)colorWithSRGB:(NSString *)srgb;
+ (UIColor *)colorWithRGBString:(NSString *)rgb;
+ (UIColor *)colorWithSRGB:(NSString *)srgb alpha:(CGFloat)alpha;
+ (UIColor *)colorWithHexColorString:(NSString *)hexColorString alpha:(CGFloat)alphaValue;
+ (RGB)rgbWithHexColorString:(NSString *)hexColorString alpha:(CGFloat)alphaValue;

/**
 *  @brief 两种颜色中间的某个颜色
 *  @param progress 中间某个百分比
 */
+ (UIColor *)colorWithProgress:(CGFloat)progress fromColor:(UIColor *)fromColor toColor:(UIColor *)toColor;

/**
 *  @brief 两种颜色相似
 */
+ (BOOL)isColor:(UIColor* )color1 similarWith:(UIColor* )color2;

+ (void)gradientColors:(NSArray *)colors onView:(UIView *)view horizontal:(BOOL)isHorizontal;
+ (NSUInteger)rgbOfPoint:(CGPoint)point onLayer:(CALayer *)layer;
+ (NSInteger)rgbFromR:(NSInteger)r g:(NSInteger)r b:(NSInteger)r;
+ (NSUInteger)rgbFromColor:(UIColor *)color;
+ (CGFloat)alphaFromColor:(UIColor *)color;
/**
 *  @brief hsb色值转化为rgb色值
 *  hues 0-360整数
 *  sat 0-1 float
 *  hue 0-1 float
 */
+(NSArray <NSNumber *>*)hsb2rgbFromhue:(float)h sat:(float)s brightness:(float)v;
/**
 *  @brief rgb色值转化为hsb色值
 */
+(NSArray <NSNumber *>*)rgb2hsbFromRed:(float)r green:(float)g blue:(float)b;


/**
 将rgb颜色值转化为带#十六进制
 @return 十六进制颜色值
 */
+(NSString *)color2hexFromRGB:(RGB)rgbArr;

/**
 *  @brief 云端rgb转化为hsb色值
 *  array是三个 0-1之float类型的NSNumber
 */
+(NSArray *)HSBFromRGBString:(NSString*)dataSource;

/**
 将rgb字符转化为RGB数组

 @param rgbString rgb字符串
 @return rgb数组 0-255
 */
+(RGB)rgbArrayFromRGBString:(NSString*)rgbString;

/**
 *  @brief rgb转化为云端控制所需的值
 */
+(NSString *)buildSendValueWithBright:(NSInteger)brightness
                                  rgb:(long)rgb;
/// RGB值转化为颜色xy值
+ (uint32_t)color_xyFormRGB:(RGB)rgb isCache:(BOOL)isCache;
/// 颜色xy值转化为RGB
+ (RGB)colorFromColor_xy:(uint32_t)light_xy;
/// 计算颜色的色差
+ (double)calculateColorDifferenceWithColor:(RGB)rgb otherRGB:(RGB)otherRGB;
/// color转十六进制字符串 "#ARGB","#FF112233"
+ (NSString *)hexStringWithColor:(UIColor *)color;
@end

//绘制宽度为1像素的线
void draw1PxStroke(CGContextRef context, CGPoint startPoint, CGPoint endPoint, CGColorRef color);
//填充矩形区域
void fillRectWithColor(CGContextRef context, CGRect rectToFill, CGColorRef color);

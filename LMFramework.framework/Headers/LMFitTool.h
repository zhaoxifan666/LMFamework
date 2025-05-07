//
//  LMFitTool.h
//  Aqara
//
//  Created by Hao on 2018/1/8.
//  Copyright © 2018年 LumiUnited. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LMFitTool : NSObject

/**
 *  屏幕尺寸的适配
 *  1.传入的宽和高为6的尺寸
 *  2.传出的为适配后的尺寸
 *  3.传入的值中不可以出现屏幕相关的尺寸或者比例，或者转换为6的尺寸或比例。
 */


/**
 *==========================屏幕适配================================
 */

/**
 *  屏幕适配的宏
 *
 *  @param width 6下的width 或 x坐标
 *
 *  @return 适配后的width 或 x坐标
 */

#define kFitWithWidth(width) [LMFitTool fitWithWidth:width]



/**
 *  屏幕适配的宏
 *
 *  @param height 6下的height 或 y坐标
 *
 *  @return 适配后的height 或 y坐标
 */
#define kFitWithHeight(height) [LMFitTool fitWithHeight:height]

/**
 *  字体的适配
 *
 *  @param height 6下的字体高度
 *
 *  @return 适配后的字体
 */
#define kFontWithHeight(height) [LMFitTool fitWithTextHeight:height]


/**
 *  屏幕适配
 *
 *  @param width 6下的width 或 x坐标
 *
 *  @return 适配后的width 或 x坐标
 */
+(CGFloat)fitWithWidth:(CGFloat)width;


/**
 *  屏幕适配
 *
 *  @param height 6下的height 或 y坐标
 *
 *  @return 适配后的height 或 y坐标
 */
+(CGFloat)fitWithHeight:(CGFloat)height;


/**
 *  屏幕适配
 *
 *  @param size 6下的size
 *
 *  @return 适配后的size
 */
+(CGSize)fitWithSize:(CGSize)size;



/**
 *  屏幕适配
 *
 *  @param point 6下的point
 *
 *  @return 适配后的point
 */
+(CGPoint)fitWithPoint:(CGPoint)point;


/**
 *  屏幕适配
 *
 *  @param frame 6下的rect
 *
 *  @return 适配后的rect
 */
+(CGRect)fitWithRect:(CGRect)frame;

/**
 *==========================字体适配================================
 */


/**
 *  字体的适配
 *
 *  @param height 6下的字体高度
 *
 *  @return 适配后的字体
 */
+ (UIFont *)fitWithTextHeight:(CGFloat)height;
/**
 *  字体的适配
 *
 *  @param size 6下的字体高度
 *
 *  @return 适配后的字体大小
 */
+ (CGFloat)fitWithTextSize:(CGFloat)size;
/**
 *  字体适配
 *
 *  @param fontSize iphone6 下的字体大小
 *
 *  @return 适配后的字体
 */
+ ( UIFont *)fitWithFont:(CGFloat)fontSize;

@end

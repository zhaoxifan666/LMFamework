//
//  UIFont+PingFang.h
//  AqaraOTAKit
//
//  Created by lansc on 2022/2/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, PingFangFontStyle) {
    PingFang_Medium,          // 中黑体
    PingFang_Bold,            // 粗体
    PingFang_Light,           // 细体
    PingFang_Ultralight,      // 极细体
    PingFang_Regular,         // 常规体
    PingFang_Thin,            // 纤细体
    PingFang_Heavy            //
};


@interface UIFont (PingFang)

+ (UIFont *)pingFang:(PingFangFontStyle)fontStyle size:(CGFloat)fontSize;

+ (UIFont *)pingFangMedium:(CGFloat)fontSize;
+ (UIFont *)pingFangBold:(CGFloat)fontSize;
+ (UIFont *)pingFangLight:(CGFloat)fontSize;
+ (UIFont *)pingFangUltralight:(CGFloat)fontSize;
+ (UIFont *)pingFangRegular:(CGFloat)fontSize;
+ (UIFont *)pingFangThin:(CGFloat)fontSize;
+ (UIFont *)pingFangHeavy:(CGFloat)fontSize;

@end

NS_ASSUME_NONNULL_END

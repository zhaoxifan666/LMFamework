//
//  LMAppUtil.h
//  AqaraHome
//
//  Created by jeremy on 2021/4/30.
//  Copyright © 2021 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMAppUtil : NSObject

+ (BOOL)isDebugMode;

+ (BOOL)isAdhocMode;

+ (BOOL)isReleaseMode;

+ (BOOL)isChina;
+ (BOOL)isChinaTest;
+ (BOOL)isUS;
+ (BOOL)isRussian;
+ (BOOL)isKorean;
/// 澳大利亚
+ (BOOL)isAustralia;
+ (BOOL)isOther;

//
+ (NSString*)transferCountryCode:(NSString *)deployEnvCode;

//是否越狱
+ (BOOL)isJailbroken;

//退出app
+ (void)exitApplication;

+ (UIViewController *)currentViewController;
+ (UINavigationController *)currentNavigationController;
+ (UITabBarController * _Nullable)tabbarViewController;
@end

NS_ASSUME_NONNULL_END

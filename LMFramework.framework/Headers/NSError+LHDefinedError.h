
//
//  NSError+LHDefinedError.h
//  AqaraHome
//
//  Created by dengzhihao on 2017/12/1.
//  Copyright © 2017年 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kErrorForDecryptFail -400

FOUNDATION_EXTERN NSString * const kLH_HomeKitErrorDomain;
FOUNDATION_EXTERN NSString * const kLH_LocalErrorDomain;
FOUNDATION_EXTERN NSString * const kLH_BLEErrorDomain;
FOUNDATION_EXTERN NSString * const kLH_MatterErrorDomain;


@interface NSError (LHDefinedError)

///返回格式： 错误文案（A-错误码）
- (NSString *)LMErrorDescription;

+ (NSError *)lh_unknownError;
+ (NSError *)lh_failedError;
+ (NSError *)lh_requestLumiCloudError;
+ (NSError *)lh_offLineError;
+ (NSError *)noDidError;

///网络异常 
+ (NSError *)badNetwork;

///通用错误码处理
+ (NSError *)customWithStr:(NSString *)errorMsg code:(NSInteger)errorCode;

///网络错误码
+ (NSError *)networkWithStr:(NSString *)errorMsg code:(NSInteger)errorCode;

///蓝牙模块
+ (NSError *)bleWithStr:(NSString *)errorMsg code:(NSInteger)errorCode;

///HomeKit模块
+ (NSError *)homekitWithStr:(NSString *)errorMsg code:(NSInteger)errorCode;

///Matter模块
+ (NSError *)matterWithStr:(NSString *)errorMsg code:(NSInteger)errorCode;


@end

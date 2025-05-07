//
//  DeviceUtil.h
//  AqaraHome
//
//  Created by ruie on 2019/11/5.
//  Copyright © 2019 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMDeviceUtil : NSObject

/**
 * @brief 本机名称.
 */
+ (NSString*)name;

/**
 * @brief 设备类型，如：@"iPhone", @"iPod touch".
 */
+ (NSString*)model;

/**
 * @brief 本地设备类型，如：@"iPhone", @"iPod touch".
 */
+ (NSString*)localizedModel;

/**
 * @brief 系统名称.例如：iOS
 */
+ (NSString*)systemName;

/**
 * @brief 系统版本.例如：12.0
 */
+ (NSString*)systemVersion;

/**
 * @brief 网络运营商.
 */
+ (NSString*)carrier;

/**
 * @brief 唯一标示符.
 */
+ (NSString*)identifierForVendor;

/**
 * @brief 平台.例如[iPhone9,2]，对应的是[iPhone 7 Plus]
 */
+ (NSString*)platform;

/**
 * @brief hw model.
 */
+ (NSString*)hwmodel;

/**
 * @brief cpu数量.
 */
+ (NSUInteger)cpuNumber;

/**
 * @brief cpu频率.
 */
+ (NSUInteger)cpuFrequency;


@end

NS_ASSUME_NONNULL_END


//
//  System.h
//  AqaraHome
//
//  Created by ruie on 2019/11/5.
//  Copyright © 2019 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMSystemUtil : NSObject

+ (NSString *)systemVersion;

+ (NSString *)processName;

+ (uint32_t)currentPID;

+ (uint64_t)currentTID;

//线程数量
+ (uint32_t)theadCount;

//cpu数量
+ (NSUInteger)cpuCount;

//当前app的cpu占用率
+ (float)appCpuUsage;

//当前设备cpu使用率 百分比
+ (float)cpuUsage;

//app内存使用率
+ (float)memoryUsage;

//设备内存使用率
+ (int64_t)deviceMemoryUsage;

//设备可使用内存
+ (uint64_t)availableMemory;

+ (NSString*)uuid;


@end

NS_ASSUME_NONNULL_END

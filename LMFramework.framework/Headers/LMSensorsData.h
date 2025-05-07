//
//  LMSensorsData.h
//  LMFramework
//
//  Created by ruie on 2019/11/15.
//  Copyright © 2019 ruie. All rights reserved.
//

//使用方法
//https://confluence.aqara.com/pages/viewpage.action?pageId=38154524
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMSensorsData : NSObject
//初始化神策
+ (void)initSensorsDataTracker:(NSDictionary *)launchOptions;

/// 神策数据手机开关
/// @param enable 开关
+ (void)sensorsAnalyticsEnable:(BOOL)enable;


//+ (void)trackWithEventLabel:(NSString *)eventLabel;
//+ (void)trackWithEventLabel:(NSString *)eventLabel parameters:(NSDictionary *)parameters;
+ (void)trackWithEventId:(NSString *)eventId label:(NSString *)eventLabel;
+ (void)trackWithEventId:(NSString *)eventId label:(NSString *)eventLabel parameters:(NSDictionary *)parameters;


@end

NS_ASSUME_NONNULL_END

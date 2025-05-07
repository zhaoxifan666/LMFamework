//
//  LMFoundation.h
//  LMFramework
//
//  Created by jeremy on 2021/4/15.
//  Copyright © 2021 ruie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMNetwork.h"

NS_ASSUME_NONNULL_BEGIN


@interface LMOpenSDK : NSObject

/// region是一个包含了当前域名，countrycode等信息的模型
/// @param regionModel 具体见类属性
+ (void)setRegionModel:(LMRegionModel *)regionModel;

+ (void)setServer:(NSString*)host appId:(NSString*)appId appKey:(NSString*)appKey iconBaseUrl:(NSString *)iconBaseUrl;

/*
 *应用启动时，需要传入域名，appid，appkey，图片服务器的地址，这个是必须传的(图片服务器包括了旧小米CDN和PRD同步的CDN)
 **/
+ (void)setServer:(NSString*)host appId:(NSString*)appId appKey:(NSString*)appKey iconBaseUrl:(NSString *)iconBaseUrl staticBaseUrl:(NSString * __nullable)staticBaseUrl;

+ (void)setUserId:(NSString*)userId;

//设置app登陆成功云端返回的token
+ (void)setToken:(NSString*)token;

//header里的字段，aqara home登陆后需要设置一下
+ (void)setUserId:(NSString*)userId  token:(NSString*)token;

//header里的字段，aqara home登陆后需要设置一下，第三方header里需要的话也可以设置一下, 并校验是否合法
+ (void)setUserId:(NSString*)userId  token:(NSString*)token authroizationBlock:(void (^)(id response, NSError *error))authroizationBlock;

///**
// *aqara home设备入网的域名：需要的话才设置
// *修改regionmodel的属性，要存一下，触发磁盘存储。
// */
+ (void)setCoapServer:(NSString*)coapServer;

/// 修改countryCode (对外sdk)
/// - Parameter cutyCode: countryCode
+ (void)setCutyCode:(NSString *)cutyCode;

/// 修改serverCode (对外sdk)
/// - Parameter serverCode: serverCode
+ (void)setServerCode:(NSString *)serverCode;

/**
 *header里需要传，默认是获取手机系统语言
 *eg: 英语 EN
 */
+ (void)setLanguage:(NSString*)language;

//推送的clientId,aqara home header里传，第三方sdk暂时没用
+ (void)setClientId:(NSString*)clientId;

//推送的token,aqara home header里传，第三方sdk暂时没用
+ (void)setPushToken:(NSString*)pushToken;

/**
 aqarahome和LG的header里签名方式不同，所以要做区分
 */
+ (void)setHeaderType:(LMNetworkHeaderType)headerType;

+ (LMRegionModel*)getRegionModel;
///4.0.5之前存储的旧的数据
+ (LMRegionModel*)oldRegionModel;
///清除4.0.5之前存储的旧的数据
+ (void)removeOldRegionModel;

/// 判断是否是国内服务器，用来区分海外和国内服务
+ (BOOL)isMainlandServer;

+ (NSString*)hostUrl;
+ (NSString*)coapServer;
+ (NSString*)imageUrl;
+ (NSString*)prdImageUrl;
+ (NSString*)deviceImageUrl;
+ (NSString*)appId;
+ (NSString*)appKey;
+ (NSString*)getPushToken;
+ (NSString*)getClientId;
///这个获取到的是服务器码,为了兼容旧版
+ (NSString*)countryCode;
///真实获取到的地区码
+ (NSString*)areaCode;
///服务器码
+ (NSString*)serverCode;
+ (NSString*)supportDeviceArea;
+ (LMNetworkHeaderType)headerType;

@end

NS_ASSUME_NONNULL_END

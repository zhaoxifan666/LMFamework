//
//  LMLoginUtil.h
//  AqaraHome
//
//  Created by ruie on 2019/10/22.
//  Copyright © 2019 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "LMAppUtil.h"
NS_ASSUME_NONNULL_BEGIN

@interface LMLoginUtil : NSObject

//这个类主要职责是把登陆相关的信息存储到keychain里

//取
+ (NSString *)getAccount;
+ (NSString *)getUserId;
+ (NSString *)getToken;
+ (NSString *)getPushClientId;
+ (NSString *)getPushToken;
+ (NSString *)getNickName;
+ (NSString *)getAvatarUrl;
//+ (LHUserType)getLoginType;
+ (NSString *)getPhoneNumber;

/// 请使用[LMopenSDk ]
+ (NSString *)getCountryCode __attribute__((deprecated("已过时，请使用LMopenSDk类")));
+ (NSString *)getEmail;
+ (NSString *)getAppleId;
+ (NSString *)getWechatId;
+ (NSString *)getFacebookId;
+ (NSString *)getGoogleId;
+ (NSString *)getWechatNickName;
+ (NSString *)getFacebookNickName;
+ (NSString *)getGoogleNickName;
+ (BOOL)getUnReadMessage;
+ (NSDictionary*)getUserInformationDic;
//服务商token && userid
+ (NSString *)getSencodUserId;
+ (NSString *)getSencodToken;

+ (NSString *)UDID;

//lg interface begin
+ (NSDictionary*)getLgAccountInfo;
+ (NSString*)lgSSO_KEY;
+ (NSString*)lgSERVICE_LOGIN_TYPE;
+ (NSString*)lgONEID_KEY;
///查询用户是否勾选自动登录
+ (BOOL)lgIsAutoLogin;
///lg用户获取
+ (NSString *)getlgAccount;

/// 获取LG授权设备信息 格式：账户
+ (NSString *)getLGJoinDeviceAuth;
/// 查询LG是否已经授权LGU+设备添加
+ (BOOL)isAuthorizedJoineDeviceByLG;
//lg interface end

/// 获取用户设置的温度单位
+ (NSString *)getTemperatureUnit;

/// 获取用户设置的大气压单位
+ (NSString *)getAtmosphericUnit;

/// 获取用户设置的Tvoc单位
+ (NSString *)getTvocUnit;

///专门给shourtcut用
+ (NSString *)getUserIdForShortCut;

///专门给shourtcut用
+ (NSString *)getTokenForShortCut;

///专门给shourtcut用
+ (NSString *)GTCidForShortCut;

///专门给shourtcut用
+ (NSString *)GTTokenForShortCut;

//存
+ (void)saveUserId:(NSString *)userId;
+ (void)saveToken:(NSString *)token;
+ (void)saveGTCid:(NSString *)cid;//推送
+ (void)saveGTToken:(NSString *)token;
+ (void)saveNickName:(NSString *)nickName;
+ (void)saveAvatarUrl:(NSString *)avatarUrl;
+ (void)saveEmail:(NSString *)email;
+ (void)savePhoneNumber:(NSString *)phoneNumber;

+ (void)saveRequestHost:(NSString *)requestHost appId:(NSString *)appId;
+ (void)saveAppleId:(NSString *)appleId;
+ (void)saveWechatId:(NSString *)wechatId;
+ (void)saveFacebookId:(NSString *)FacebookId;
+ (void)saveGoogleId:(NSString *)googleId;
+ (void)saveWechatNickName:(NSString *)wechatNickName;
+ (void)saveFacebookNickName:(NSString *)nickName;
+ (void)saveGoogleNickName:(NSString *)nickName;
+ (void)saveUnReadMessage:(BOOL)unReadMessage;
////服务商token && userid
+ (void)saveSecondUserId:(NSString *)secondUserId;
+ (void)saveSecondToken:(NSString *)secondToken;
//+ (void)saveLoginType:(LMLoginType)loginType;

+ (void)savelgAccountInfo:(NSDictionary*)infoDic;
/// LG添加设备授权信息
/// @param auth 账户
+ (void)savelgJoinDeviceAuth:(NSString *)auth;

/// 保存用户设置的温度单位
+ (void)saveTemperatureUnit:(NSString *)temperatureUnit;

/// 保存用户设置的大气压单位
+ (void)saveAtmosphericUnit:(NSString *)atmosphericUnit;

/// 保存用户设置的Tvoc单位
+ (void)saveTvocUnit:(NSString *)TvocUnit;


//状态
+ (BOOL)isLogin;

+ (void)saveLoginInfo:(NSDictionary *)loginDic;
/// 登录后保存信息
/// @param loginDic 登录d返回的result字段
/// @param loginType 登录状态
//+ (void)saveLoginInfo:(NSDictionary *)loginDic loginType:(LMLoginType)loginType;
+ (void)saveUserInfo:(NSDictionary *)userInfo;
//退出时调用 清除本地信息
+ (void)removeUserInfo;
+ (void)logout;

@end

NS_ASSUME_NONNULL_END

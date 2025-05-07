//
//  LHNetHeader.h
//  Aqara
//
//  Created by 赵希帆 on 2018/1/22.
//  Copyright © 2018年 LumiUnited. All rights reserved.
//

#ifndef LHNetHeader_h
#define LHNetHeader_h

//自定义状态码
static const NSInteger LHRequestCacheErrorExpired = -1;
static const NSInteger LHRequestCacheErrorVersionMismatch = -2;
static const NSInteger LHRequestCacheErrorSensitiveDataMismatch = -3;
static const NSInteger LHRequestCacheErrorAppVersionMismatch = -4;
static const NSInteger LHRequestCacheErrorInvalidCacheTime = -5;
static const NSInteger LHRequestCacheErrorInvalidMetadata = -6;
static const NSInteger LHRequestCacheErrorInvalidCacheData = -7;

static const NSInteger ERROR_CODE_POSITIONERROR = -100;
static const NSInteger ERROR_CODE_NETWORK_BREAK = -101; // 没有网络连接，请稍后重试

//网络失败
static const NSInteger ERROR_CODE_NETWORK_ERROR = -102;

//后台返回状态码
static const NSInteger ERROR_CODE_SUCCESS = 0;
static const NSInteger ERROR_CODE_TIMEOUT = 100;        // 超时
static const NSInteger ERROR_CODE_INVALID_DATA_PACKAGE = 101;
static const NSInteger ERROR_CODE_DATA_PACKAGE_IS_ALTERED = 102;
static const NSInteger ERROR_CODE_DATA_PACKAGE_MAY_LOSE = 103;
static const NSInteger ERROR_CODE_SERVER_TOO_BUSY = 104;
static const NSInteger ERROR_CODE_DATA_PACKAGE_HAS_EXPIRED = 105;
static const NSInteger ERROR_CODE_INVALID_SIGN = 106;
static const NSInteger ERROR_CODE_ILLEGAL_APPKEY = 107;
static const NSInteger ERROR_CODE_ERROR_TOKEN_EXPIRED = 108;
static const NSInteger ERROR_CODE_TOKEN_ABSENCE = 109;
static const NSInteger ERROR_CODE_BAD_INGORE_SUCCESS = 110;
static const NSInteger ERROR_CODE_ERROR_REQUEST_PATH = 301;     // 路径错误
static const NSInteger ERROR_CODE_ERROR_REQUEST_PARAMS = 302;   // 参数错误
static const NSInteger ERROR_CODE_ERROR_BAD_RESPONSE = 303;     // 参数类型错误
static const NSInteger ERROR_CODE_ERROR_REQUEST_METHOD_NO_SUPPORT = 304;
static const NSInteger ERROR_CODE_ERROR_REQUEST_HEADER_FAILED = 305;
static const NSInteger ERROR_CODE_ERROR_TOO_MANY_REQUEST = 429;
static const NSInteger ERROR_CODE_ERROR_USER_NO_REG = 801;
static const NSInteger ERROR_CODE_ERROR_USER_NO_LOGIN = 802;
static const NSInteger ERROR_CODE_ERROR_USER_PERMISSION_DENIED = 803;
static const NSInteger ERROR_CODE_ERROR_TOKEN_FAILED = 804;
static const NSInteger ERROR_CODE_ERROR_USER_HAS_REG = 805;
static const NSInteger ERROR_CODE_ERROR_PASSWORD_NOT_CORRECT = 810;
static const NSInteger ERROR_CODE_ERROR_AUTHCODE_ILLEGAL = 413;
static const NSInteger ERROR_CODE_ERROR_PERMISSION_TRANSFER_NOT_SATISFY = 414;
static const NSInteger ERROR_CODE_ERROR_PERMISSION_TRANSFER_NOT_SUCCESS = 415;
static const NSInteger ERROR_CODE_ERROR_PERMISSION_GRANT_NOT_SATISFY = 416;
static const NSInteger ERROR_CODE_ERROR_PERMISSION_GRANT_NOT_SUCCESS = 417;
static const NSInteger ERROR_CODE_ERROR_PERMISSION_TRANSFER_TCODE_WRONG = 418;
static const NSInteger ERROR_CODE_ERROR_PERMISSION_TRANSFER_TCODE_EXPIRED = 419;
static const NSInteger ERROR_CODE_ERROR_USER_HAS_BINDED = 420;
static const NSInteger ERROR_CODE_ERROR_USER_NO_BINDED = 421;
static const NSInteger ERROR_CODE_ERROR_USER_CANNOT_UNBIND = 422;
static const NSInteger ERROR_CODE_ERROR_USER_PERMISSION_ACODE_DENY = 423;
static const NSInteger ERROR_CODE_ERROR_USER_PERMISSION_ACODE_NOT_EXIST = 424;
static const NSInteger ERROR_CODE_ERROR_USER_PERMISSION_ACODE_SHARE_COUNT_FULL = 425;
static const NSInteger ERROR_CODE_ERROR_USER_FEEDBACK_NOT_EXIST = 426;
static const NSInteger ERROR_CODE_ERROR_USER_ACCOUNT_THIRD_UNSUPPORT = 427;
static const NSInteger ERROR_CODE_ERROR_USER_NOT_PASSWORD = 428;
static const NSInteger ERROR_CODE_ERROR_USER_ACCOUNT_ERROR = 429;
static const NSInteger ERROR_CODE_SERVER_INTERNAL_ERROR = 500;
static const NSInteger ERROR_CODE_PROXY_ERROR = 501;
static const NSInteger ERROR_CODE_ERROR_DEVICE_NO_REG = 601;
static const NSInteger ERROR_CODE_ERROR_DEVICE_NO_ONLINE = 602;
static const NSInteger ERROR_CODE_ERROR_GATEWAY_DEVICE_NO_ONLINE = 602;
static const NSInteger ERROR_CODE_ERROR_DEVICE_PERMISSION_DENIED = 603;
static const NSInteger ERROR_CODE_ERROR_DEVICE_BIND = 604;
static const NSInteger ERROR_CODE_ERROR_DEVICE_MAC_VERIFY = 605;
static const NSInteger ERROR_CODE_ERROR_DEVICE_NAME_DUPLICATION = 606;
static const NSInteger ERROR_CODE_ERROR_DEVICE_GATEWAY_BIND_ERROR = 607;
static const NSInteger ERROR_CODE_ERROR_DEVICE_SUB_BIND_ERROR = 608;
static const NSInteger ERROR_CODE_ERROR_DEVICE_GATEWAY_UNBIND_ERROR = 609;
static const NSInteger ERROR_CODE_ERROR_DEVICE_SUB_UNBIND_ERROR = 610;
static const NSInteger ERROR_CODE_ERROR_DEVICE_SUB_NO_BIND = 611;
static const NSInteger ERROR_CODE_ERROR_DEVICE_REQUEST_NOT_RESPONSE = 612;

static const NSInteger ERROR_CODE_ERROR_POSITION_UNALLOW_DELETE = 702;
static const NSInteger ERROR_CODE_ERROR_POSITION_NAME_DUPLICATION = 703;
static const NSInteger ERROR_CODE_ERROR_IFTTT_DELETED = 707;
static const NSInteger ERROR_CODE_ERROR_IFTTT_NO_EXIST = 731;
static const NSInteger ERROR_CODE_ERROR_LIGHTSCENE_EXIST = 749;

static const NSInteger ERROR_CODE_ERROR_PASSWORD_INCORRECT = 810;       //密码错误
static const NSInteger ERROR_CODE_ERROR_ACCOUNT_REGISTERED = 805;
static const NSInteger ERROR_CODE_ERROR_ACCOUNT_NO_REGISTER = 801;
static const NSInteger ERROR_CODE_ERROR_AUTOCODE_INCORRECT = 811;
static const NSInteger ERROR_CODE_ERROR_AUTOCODE_PROJECT_INCORRECT = 816; // 项目转移的授权码错误
static const NSInteger ERROR_CODE_ERROR_ACCOUNT_BINDED = 806;
static const NSInteger ERROR_CODE_ERROR_ACCOUNT_NO_BIND = 808;
static const NSInteger ERROR_CODE_ERROR_ACCOUNT_FORMAT_ERROR = 807;

static const NSInteger ERROR_CODE_ERROR_IFTTT_NO_SATISFIED = 1203;
static const NSInteger ERROR_CODE_ERROR_DEVICE_NO_EXIST = 618;
static const NSInteger ERROR_CODE_ERROR_SCENE_NO_EXIST = 1202;
static const NSInteger ERROR_CODE_ERROR_IFTTT_EXECUTE_FAILED = 1201;

static const NSInteger ERROR_CODE_ERROR_PROJECT_NOT_EXIST = 2095; // 项目不存在
static const NSInteger ERROR_CODE_ERROR_PROJECT_STATE_ABNORMAL = 2096; // 项目状态异常

static const NSInteger ERROR_CODE_EMPTY_USERID = 900;
static const NSInteger ERROR_CODE_SUBDEVICE_UPGRADING = 908;
static const NSInteger ERROR_CODE_ERROR_GATEWAY_UPGRADING = 909;
static const NSInteger ERROR_CODE_ERROR_OTHER_DEVICE_UPGRADING = 910;
static const NSInteger ERROR_CODE_ERROR_GATEWAY_NEED_UPGRADE = 911;
static const NSInteger ERROR_CODE_ERROR_CAN_NOT_UPGRADE = 912;

static const NSInteger ERROR_CODE_FORCE_UPDATAE = 9999;

static const NSInteger ERROR_CODE_INVALID_REGION = 9998; //不支持地区错误码

static const NSInteger ERROR_CODE_NOT_REAL_LOGOUT = 901; // 点击退出登录，但请求回调还没回来


//typedef NS_ENUM(NSUInteger, LHRequestType) {
//    LHRequestDefault,
//    LHRequestLogout,
//};

#endif /* LHNetHeader_h */

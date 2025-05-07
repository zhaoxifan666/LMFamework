//
//  NSString+Utils.h
//  Aqara
//
//  Created by Hao on 2018/1/11.
//  Copyright © 2018年 LumiUnited. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface NSString (LMUtils)

/**
 查找子字符串在父字符串中的所有位置
 @param content 父字符串
 @param tab 子字符串
 @return 返回位置数组
 */
+ (NSMutableArray*)findAllLocationsFromParentStr:(NSString *)content subStr:(NSString *)tab;

+ (NSString *)uuidString;

/**
 * 家或房间、设备、service。格式要求：中文字符、英文字符、数字、空格、中间杠符,且末尾只能是字母、数字和中文
 */
- (BOOL)isValidDeviceOrServiceName;

- (BOOL)isValidDeviceOrServiceNameAndNeedShowTips;

/**
 是否以字母或者数字/中文结果

 @return bool值
 */
- (BOOL)isEndWithLetter;

/// 这个方法用了会导致崩溃，错误，请使用类方法
- (BOOL)isEmpty __attribute__((deprecated("已过时，请使用+isEmpty:")));
//
/**
 判断字符串是否为空
 */
+ (BOOL)isEmpty:(NSString *)string;
/**
 判断字符串是不是字母和数字

 @return BOOL
 */
- (BOOL)isNumAndLetter;

/// 是否为全数字
- (BOOL)isAllNum;

- (BOOL)isAllFloat;

+ (NSString *)languages;

+ (BOOL)isChinese;

+ (NSString *)phoneType;

+ (NSString *)getLanguageFromSystem;

+ (NSString *)timeIntervalStrWithGMT;

- (NSString *)urlEncodeString;

- (NSString *) aes256_encrypt:(NSString *)key;

-(NSString *) aes256_decrypt:(NSString *)key;

- (NSString *)lm_aes256_encrypt:(NSString *)key iv:(NSString *)iv;

- (NSString *)lm_aes256_decrypt:(NSString *)key iv:(NSString *)iv;

- (BOOL)isValidUrl;


/// 去除字符串尾部连续字符（如空格）
- (NSString *)stringByTrimmingRightCharactersInSet:(NSCharacterSet *)characterSet;


/**
 计算文字宽度
 */
//+ (CGSize)sizeWithString:(NSString*)str andFont:(UIFont*)font andMaxSize:(CGSize)size;


/// 把对象转为JSON字符串
/// @param object <#object description#>
+ (NSString *)JSONFromOjbect:(id)object;

+ (id)objectFromJsonString:(NSString *)jsonString;
/**
 md5 加密字符串
 
 @return md5 加密字符串
 */
- (nonnull NSString *)md5;

/**
 MD5 大写

 @return MD5 加密字符串
 */
- (nonnull NSString *)upMD5;

/**
 时间戳转换
 规则：
 当日显示 时间
 一天前显示 昨天 时间
 当年显示 MM/dd
 更早显示  yyyy/MM/dd

 @param date 要转换的日期
 @param dateFormat 时间戳格式，默认不填
 @return 返回时间转换后的String
 */
//+ (NSString *_Nullable)getTimeStringWithDate:(NSDate *_Nullable)date dateFormat:(NSString *_Nullable)dateFormat;


+ (NSString *_Nullable)richTextWithStr:(NSString *_Nullable)str withUnit:(NSString *_Nullable)unit;


/**
 传给IoT的did信息转化
 负责把"lumi.00"大写的格式改为"lumi."

 @param str @"lumi.00大写"
 @return "lumi."
 */
+ (NSString *_Nullable)getIoTDid:(NSString *_Nullable)str;


/// 去掉HomeKit SerialNum 中前缀'0'
/// @param str  serialNum 字符串
+ (NSString *)formatSerialNumPrefix:(NSString *)str;

/**
 云端通的时候序列号展示
 负责把"lumi."大写的格式改为"00+14位大小写"
 
 @param str @"lumi.位14小写"
 @return "lumi.00+14位大写"
 */
+ (NSString *)didToSerialNumber:(NSString *)str;

/**
 M2网关序列号展示
 负责把"lumi1."去掉并大写

 @param str @"lumi1.xxxxxx"
 @return @"xxxxxx"
 */
+ (NSString *)didToM2SerialNumber:(NSString *)str;

/**
 虚拟设备序列号展示
 负责把"virtual."去掉并大写，前面加"00"
 
 @param str @"virtual.xxxxxx"
 @return @"00XXXXXX"
 */
+ (NSString *)didToVirtualSerialNumber:(NSString *)str;

/**
 获取icon的图片名称，默认是加上_on

 @param iconId service的iconId
 @return iconName
 */
+ (NSString *)getIconName:(NSString *)iconId;

+ (NSString *)base64EncodeString:(NSString *)string;
+ (NSString *)base64DecodeString:(NSString *)string;

+ (NSString *)base64EncodedStringFrom:(NSData *)data;
// 是否包含表情
+ (BOOL)stringContainEmoji:(NSString *)string;

///判断是否是网址
+ (BOOL)isUrlAddress:(NSString *)url;

///是否包含特殊字符 $, #, {, }, [, ]
-(BOOL)isContainSpecialCharacter;

//数字转十六进制字符串
+ (NSString *_Nullable)numberToHexString:(NSUInteger)hexNumber;

//16进制字符串转整型
- (NSInteger)hexStringToNumber;

//十六进制数据字符串转换为data
- (NSData *_Nullable)hexStringToData;

//data转换为十六进制数据字符串
+ (NSString *_Nullable)dataToHexString:(NSData *_Nullable)data;

/**
 判断字符串是否包含字符、数字、字母的2种，限制字数8-16
 @return Bool值
 */
- (BOOL)pwdFormatPattern;

/**
 计算文本size

 @param font 文本字体大小
 @param width 最大宽度
 @return 文本size
 */
- (CGSize)sizeWithFont:(UIFont *)font forWidth:(CGFloat)width;


/// 基础计算，截取指定小数位数
/// @param price 需要处理的数字
/// @param position 保留小数点后位数
+ (NSString *)notRounding:(float)price afterPoint:(int)position;

+ (NSString *)compareTwoTime:(NSTimeInterval)startTime endTime:(NSTimeInterval)endTime;


/// 把秒转换为时间格式显示 最多到分总
/// @param sec 整数秒
+ (NSString *)converSecondToTimeStr:(int)sec;
/**
 判断是否符合 格式

 @param format 格式
 @return 是否符合
 */
- (BOOL)isConformWithFormat:(NSString *)format;

- (BOOL)isConformWithFormatOrScope:(NSString *)format;

+ (NSString *)formatSequenceTimeWithTimeStr:(NSString *)timeStr;

- (BOOL)predicateWithSuffix:(NSString *)suffix;

- (BOOL)predicateWithSuffixArray:(NSArray *)suffixArray;

/// 是否包含中文
- (BOOL)containsChinese;

//判断是否是手机号码或者邮箱
- (BOOL)isEmail;
- (BOOL)isPhoneNo;

/// 用指定字符串替换特殊字符，目前用在Homekit名称同步相关
/// @param newString 指定字符串
- (NSString *)replaceSpecialCharactersWithNewString:(NSString *)newString;

/*
 * 校验非法字符，允许输入中文，英文，韩文，俄文
 */
- (BOOL)isValidName;

/// 保证精度的除法运算，并截取指定小数位数
/// @param dividend 被除数
/// @param divisor 除数
/// @param position 保留小数点后位数
+ (NSString *)notDividingRounding:(float)dividend withDivisor:(float)divisor afterPoint:(int)position;

- (BOOL)isValidNameAndNeedShowTips;

- (BOOL)isHomeId;
- (BOOL)isRoomId;
@end

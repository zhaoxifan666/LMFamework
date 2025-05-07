//
//  LMCommonSecurityTool.h
//  LMFramework
//
//  Created by chenshuang on 2020/12/23.
//  Copyright © 2020 ruie. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMCommonSecurityTool : NSObject

/// AES加密
/// @param plainText 明文
/// @param key key
+ (NSString *)AES128EncryptWithText:(NSString *)plainText key:(NSString *)key;

+ (NSData *)AES128EncryptWithData:(NSData *)plainData key:(NSString *)key;

/// AES解密
/// @param encryptText 密文
/// @param key key
+ (NSString *)AES128DecryptWithText:(NSString *)encryptText key:(NSString *)key;

+ (NSData *)AES128DecryptWithData:(NSData *)encryptData key:(NSString *)key;

+ (NSData *)AES128DecryptWithData:(NSData *)encryptData keyData:(NSData *)keyData;

@end

NS_ASSUME_NONNULL_END

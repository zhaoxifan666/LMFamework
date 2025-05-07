//
//  LMKeyChain.h
//  AqaraHome
//
//  Created by ruie on 2019/10/22.
//  Copyright © 2019 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Security/Security.h>
NS_ASSUME_NONNULL_BEGIN
@interface LMKeyChain : NSObject
+ (void)setObject:(NSString*)object forKey:(NSString*)key;
/**
 内存中有直接返回，没有从keychain取并缓存。
 */
+ (NSString*)objectForKey:(NSString*)key;
/**
  从keychain取并缓存，这个方法主要是给shortcut用的。
 */
+ (NSString*)objectFromKeyChainForKey:(NSString *)key;

+ (void)removeObjectForKey:(NSString*)key;

+ (BOOL)setDictionary:(NSDictionary *)dic forKey:(NSString *)key;
+ (NSDictionary *)dictionaryWithKey:(NSString *)key;

+ (void)setObject:(NSString*)object forKey:(NSString*)key;



/// 存储支持自定义对象
/// @param obj 需要实现coding协议
/// @param key 字符串
+ (BOOL)setCustomObj:(id<NSCoding>)obj forKey:(NSString *)key;

+ (id<NSCoding>)customObjForKey:(NSString *)key;
@end
NS_ASSUME_NONNULL_END

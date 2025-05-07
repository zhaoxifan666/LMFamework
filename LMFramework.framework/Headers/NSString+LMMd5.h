//
//  NSString+md5.h
//  AqaraHome
//
//  Created by ruie on 2019/10/21.
//  Copyright © 2019 Lumi United Technology Co., Ltd. All rights reserved.
//


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (LMMd5)

- (nonnull NSString *)md5;

@end


//安全获取NSDictionary中的key
id _Nullable ObjectForKeySafety(id _Nullable obj,NSString * _Nullable key);
//安全获取NSDictionary中的key,并且判断取出的值得类型是否正确
id _Nullable ObjectForKeyAndClassTypeSafety(id _Nullable obj,NSString * _Nullable key,Class _Nullable classType);
//安全获取数组中的某个值
id _Nullable ObjectIndexSafety(id _Nullable obj,NSUInteger index);
//安全获取数组中的某个值，并且判断取出的值得类型是否正确
id _Nullable ObjectIndexAndClassTypeSafety(id _Nonnull obj,NSUInteger index,Class _Nullable classType);
//安全获取string
id _Nonnull StringSafety(id _Nonnull obj);
//安全获取NSArray
id _Nonnull ArraySafety(id _Nonnull obj);
//安全获取NSDictionary
id _Nonnull NSDictionarySafety(id _Nonnull obj);


NS_ASSUME_NONNULL_END

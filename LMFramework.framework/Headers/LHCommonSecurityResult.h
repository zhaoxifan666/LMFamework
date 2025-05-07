//
//  LHCommonSecurityResult.h
//  AqaraHome
//
//  Created by 绿米 on 2019/5/16.
//  Copyright © 2019 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LHCommonSecurityResult : NSObject

+ (NSData *)aesDecryptWithData:(NSData *)data key:(NSData *)key iv:(NSData *)iv;

+ (NSData *)aesDecryptWithData:(NSData *)data key:(NSString *)key;

@end

NS_ASSUME_NONNULL_END

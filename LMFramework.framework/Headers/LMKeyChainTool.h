//
//  LMKeyChainTool.h
//  AqaraHome
//
//  Created by 赵希帆 on 2018/5/4.
//  Copyright © 2018年 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LMKeyChainTool : NSObject

#pragma mark - 存储用户偏好设置到NSUserDefults

+(void)saveUserData:(id)data forKey:(NSString*)key;

#pragma mark读取用户偏好设置

+(id)readUserDataForKey:(NSString*)key;

#pragma mark删除用户偏好设置

+(void)removeUserDataForkey:(NSString*)key;

@end

//
//  LHLocalizationDebugManager.h
//  AqaraHome
//
//  Created by 赵希帆 on 2022/2/12.
//  Copyright © 2022 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMAppDefine.h"

#define LHLocalizationKey       @"LM_LHLocalizationKey"

NS_ASSUME_NONNULL_BEGIN

@interface LHLocalizationDebugManager : NSObject

/// 是否打开多语言key校对工具
@property (nonatomic, assign) BOOL isOpenTool;

/// 存放多语言和对应key
@property (nonatomic, strong) NSCache *cache;

SINGLETON_HEADER(LHLocalizationDebugManager)

@end

NS_ASSUME_NONNULL_END

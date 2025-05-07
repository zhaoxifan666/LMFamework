//
//  LMUserVipManager.h
//  LMFramework
//
//  Created by lansc on 2024/12/11.
//  Copyright © 2024 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LMUserVipState) {
    noData = 0,
    NotVip,
    basicVip,
    proVip,
    plusVip
};

@interface LMUserVipInfo : NSObject
///0-在显示周期60天内，1-不在
@property(nonatomic, assign) NSInteger inDisplayPeriod;
///100-plus Plus 101-pro 102-basic (开通的前提下有效)
@property(nonatomic, assign) NSInteger vasType;
///未开通/开通
@property(nonatomic, assign) BOOL isOpen;
///status=3，即快过期时，过期类型，1-1天内过期，2-两天内3-三天内过期0-未知
@property(nonatomic, assign) NSInteger expireType;
///1-有免费服务未领取 2-已付费，有免费升级3-已付费，快到期4-已过期5-未开通，6-已开通，但不是快到期 (判断是否开通可用isOpen)
@property(nonatomic, assign) NSInteger status;

@property(nonatomic, assign, readonly) BOOL isVip;
@property(nonatomic, assign, readonly) LMUserVipState vipState;

@end

@interface LMUserVipManager : NSObject
///判断某个家庭是否开通了vip
//+(BOOL)isVip:(NSString *)positionId;
///某个家庭vip状态
+(LMUserVipState)vipState:(NSString *)positionId;
///获取某个家庭的vip数据
+(LMUserVipInfo * _Nullable)vipData:(NSString *)positionId;
///获取本地所有的vip数据 key = positionId
+(NSDictionary<NSString *,LMUserVipInfo *>* _Nullable)allVipData;
///设置某个家庭VIP数据
+(void)setVipData:(LMUserVipInfo *)vipData positionId:(NSString *)positionId;

///请求查找家庭VIP权限,会更新单例数据
+(void)fetchUserVipInfo:(NSString *)positionId completion:(void(^ __nullable)(LMUserVipInfo * _Nullable vipInfo))completion;
@end

NS_ASSUME_NONNULL_END

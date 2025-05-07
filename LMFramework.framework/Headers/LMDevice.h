//
//  LMDevice.h
//  LMFramework
//
//  Created by 江顺金 on 2021/5/17.
//  Copyright © 2021 ruie. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMDevice : NSObject<NSMutableCopying>

@property (nonatomic, strong) NSString *did;                // 设备ID必须有(如果是虚拟设备，是positionId)

@property (nonatomic, strong) NSString *model;              // 标识符

@property (nonatomic, strong) NSString *name;

@property (nonatomic, strong) NSString *iconUrl;

@property (nonatomic, strong) NSString *parentId;           // 网关ID

@property (nonatomic, strong) NSString *parentDeviceName;   // 网关名称

@property (nonatomic, strong) NSString *parentModel;        // 网关模型值

@property (nonatomic, strong) LMDevice *parentDevice;       // 网关设备

@property (nonatomic, strong) NSString *firmwareVersion;    // 固件版本

@property (nonatomic, strong) NSString *bindDate;

@property (nonatomic, strong) NSString *bindTime;

@property (nonatomic, strong) NSString *zigbeeSignal;

@property (nonatomic, strong) NSMutableDictionary<NSString *, NSDictionary *> *pointAttr;     // 具体值列表

@property (nonatomic, strong) NSMutableArray *subDevices;

@property (nonatomic, strong) NSString *subCategory;        // 查询某个子设备可入网关的support model值;

@property (nonatomic, strong) NSString *positionId;         // 位置id

@property (nonatomic, strong) NSString *positionName;       // 设备所在房间名称

@property (nonatomic, strong) NSString *dbPositionId;       // 数据库使用

@property (nonatomic, strong) NSString *type;               // 遥控器，有无状态空调

@property (nonatomic, assign) NSInteger deviceType;

@property (nonatomic, strong) NSString *parentPositionId;   // 设备所在家的位置ID（用于新增设备的推送信息里面）

@property (nonatomic, assign) BOOL isPreventMistakenDelete; // 是否支持防误删

@property (nonatomic, assign) BOOL isVirtual;               // 是否是虚拟设备

@property (nonatomic, assign) BOOL isOnline;

@property (nonatomic, assign) BOOL isSharingDevice;         // 是否为分享设备

@property (nonatomic, assign) NSInteger subDeviceCount;     // 网关设备才有子设备数量字段

@property (nonatomic, assign) BOOL isLowBattery;            // 是否低电量 由云端字段“electricQuantity” 转化

@property (nonatomic, assign) BOOL isBindGateway;           // 是否绑定了网关（蓝牙设备）

@property (nonatomic, assign) NSInteger isSupportConfig;    // 当前设备是否支持JSON配置 0未查询， 1支持， 2不支持

@property (nonatomic, copy) NSString *ip;                   // ip地址

@property (nonatomic, copy) NSString *mac;                  // mac地址

@property (nonatomic, copy) NSString *lastOnlineTimeStr;

@property (nonatomic, copy) NSString *privacyAgreementUrl;

/// 设备X码
@property (nonatomic, copy) NSString *xcode;

/**
 父类转子类，子类必须重写！
 */
- (instancetype)initWithDevice:(LMDevice *)device;

- (NSString *)modelToJSONString;

@end

NS_ASSUME_NONNULL_END

//
//  LMMessageCenter.h
//  DarkMode
//
//  Created by ruie on 2020/1/21.
//  Copyright © 2020 ruie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LMAppDefine.h"

typedef NS_ENUM(NSInteger, LMMessageCenterType) {
    MsgCenterType_Unknow        = -1,       //未知
    MsgCenterType_Main          = 100,      //主壳工程
    MsgCenterType_LMBaseFramework,          //基础库
    MsgCenterType_LMLoginFramework,          //登陆模块
    MsgCenterType_LMAddDeviceFramework,     //添加设备
    MsgCenterType_LMCameraFramework,        //摄像机（G2/G2H）
    MsgCenterType_LMAutomationScene,        //自动化场景
    MsgCenterType_LMChartFramework,         //曲线模块
    MsgCenterType_LMPositionFramework,       //家庭位置管理
    MsgCenterType_LMDeviceAccessNetFramework, //入网模块
    MsgCenterType_LMLightFramework,         // 灯光模块
    MsgCenterType_LMIrcodeModule,           // 红外模块
    MsgCenterType_LMOTAModule,              // OTA模块
    MsgCenterType_LMDashboardFramework,     // 看板模块
    MsgCenterType_LMSecurityGuardFramework, /// 安防模块
    MsgCenterType_LMAutomateFramework, /// 自动化2.0
};

/**
消息中心。处理各个模块之间通讯问题
*/

@interface LMMessageCenter : NSObject
SVDECLARE_SINGLETON()

/**
 * @brief 注册消息接收者
 * @receiver 消息接收者
 */
- (void)registerMsgCenterReceiver:(id)receiver type:(LMMessageCenterType)type;

/// 封装了LMMessageCenterType的Router方法
/// @param msg router path "/lm_msg_chart/main"
/// @param param 页面所需的参数
/// @param block 处理回调
- (BOOL)postMsg:(NSString*)msg param:(nullable id)param block:(nullable void(^)(NSError * _Nullable error, id _Nullable result))block;

- (BOOL)postMsg:(LMMessageCenterType)type msg:(NSString*_Nullable)msg navi:(UINavigationController *_Nullable)navi param:(id _Nullable )param block:(void(^_Nullable)(NSError * _Nullable error, id _Nullable result))block;
/**
 * @brief 发送消息
 * @type 模块
 * @msg 字符串，消息名字
 * @param 参数，会带给接受者
 * @block 结果回调
 *
 * @return
 */
- (BOOL)postMsg:(LMMessageCenterType)type msg:(NSString*_Nonnull)msg param:(nullable id)param block:(nullable void(^)(NSError * _Nullable error, id _Nullable result))block;


@end


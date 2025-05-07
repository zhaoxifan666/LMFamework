//
//  LHNaviType.h
//  AqaraHome
//
//  Created by 赵希帆 on 2018/4/28.
//  Copyright © 2018年 Lumi United Technology Co., Ltd. All rights reserved.
//

#ifndef LHNaviType_h
#define LHNaviType_h

typedef NS_ENUM(NSUInteger, LH_NAVBUTTON_TAG) {
    LH_CUSTOM,           //自定义
    LH_BACK,             //返回
    LH_BACK_WHITE,       //白色返回
    LH_EDIT,             //编辑
    LH_SEARCH,           //搜索
    LH_FILT,             //筛选
    LH_ADD,              //添加
    LH_MORE,             //更多
    LH_RECORD,           //记录
    LH_COMPLETE,         //完成
    LH_SAVE,             //保存
    LH_CANCEL,           //取消
    LH_STANDARD,         //标准
    LH_PROGRAM,          //节目
    LH_CONFIRM,          //确定
    LH_MORE_WHITE,       //白色更多
    LH_COMPLETE_WHITE,   //白色完成
    LH_SCREEN,           //横屏
    LHRefresh,           //刷新
    LH_ADD_TIMER,        //添加刷新
    LH_ASSGIN,           //分配
    LH_SCAN,             //扫描
    LH_LOCAL,            //定位
    LH_SEND_INVITE,      //发送邀请
    LH_LogOut,           //退出登录
    LH_CONFIRMITEM,      //确认
    LH_MAX,              //啥按钮都不加
    LH_DOWNLOAD,         //下载
    LH_INFO,             //解释信息
    LH_SETTING,          //设置图标
    LH_UNBIND,           //解除绑定
    LH_DELETE,           //删除图标
    LH_SELECT,           //选择
    LH_SKIP,             //跳过
    LH_EDITICON,         //编辑
    LH_DELETE_RED,       //红色删除按钮
    LH_ServiceList,      //服务单,
    LHRefresh_BLACK,     //黑色刷新
    LH_SAVE_ICON,        //保存√图标
    LH_CLOSE_ICON,       //关闭×图标
    LH_ICON_HELP_BLACK,  //黑色帮助按钮
};

typedef NS_ENUM(NSUInteger, LUMI_EMPTY_TYPE) {
    LUMI_NOT_EMPTY,              // 数据非空
    LUMI_LOADING_EMPTY,          // loading动画
    LUMI_FAIL_EMPTY,             // 数据加载失败
    LUMI_DATA_EMPTY,             // 数据为空
    LUMI_POSITION_EMPTY,         // 家庭为空
    LUMI_DEVICE_EMPTY,           // 暂无设备信息
    
    LUMI_NETWORK_BREAK,          // 没有网络连接，请稍后再试。(手机无法连接网络时显示)
    LUMI_NETWORK_TIMEOUT,        // 访问超时，请稍后再试。(手机网络正常，但云端返回超时)
    LUMI_DNS_FAIL,               // 域名解析错误，请稍后再试。(手机网络正常，但域名解析错误)
    LUMI_EXECUTE_FAIL,           // 执行失败，请稍后再试。(参数错误、格式错误、权限不足、服务器异常、云端返回失败)
    LUMIN_UNKNOW_FAIL,           // 未知错误，请稍后重试。(非以上几种情况时，显示此类错误提示)
    LUMI_REMOVEMODEL_NODATA,     // 去model页面，暂无数据
    LUMI_MAINPAGE_BLANK,         // 首页无设备、信息和控制
    LUMI_DEVICE_BLANK,           // 设备页面无设备
    LUMI_LINKAGE_BLANK,          // 自动化页面无数据
    LUMI_SCENE_BLANK,            // 场景页面无数据
    LUMI_COMMON_NODATA,          // 公共的无数据缺省页
    LUMI_SELECT_GATEWAY_BLANK,   // 选择网关页面，暂无网关
    LUMI_NOT_LOGIN,              // 自动化、场景页面未登录
    LUMI_CREATE_DEVICE_INFO,     // 首页添加信息、添加控制页面无数据
    LUMI_MAINPAGE_NOLOG,         // 首页设备暂无日志
    LUMI_LOCK_USER_FINGERPRINT_BLANK,   // 门锁暂无指纹
    LUMI_LOCK_USER_PASSWORD_BLANK,      // 门锁暂无密码
    LUMI_LOCK_USER_KEYS_BLANK,          // 门锁暂无钥匙
    LUMI_LOCK_USER_NFC_BLANK,           // 门锁暂无NFC
    LUMI_VRF_NO_AISLE,           // VRF无通道
    LUMI_PROJECT_MANAGEMENT_LIST_BLANK,    // 项目管理列表
    LUMI_LIST_FAILED,            // 获取列表失败
    LUMI_MESSAGE_LIST_BLANK,     // 消息中心无数据
    LUMI_SERVICE_ALARM_BLANK,  //Service警戒无数据
    LUMI_EMPTY_ONCE_PWD_BLANK,      //一次性密码为空
    LUMI_EMPTY_TYPE_UNBIND_GATEWAY, //未绑定网关
    LUMI_FAMILY_ALERT_TIMER_BLANK,    //家庭警戒无数据
    LUMI_IRCODE_LIST_BLANK,           //红外学习列表无数据
    LUMI_NO_VISABLE_DEVICE_BLANK,     //还没有可用设备
    LUMI_NO_SCENE_BLANK,              //还未添加场景
    LUMI_EXECUTE_LOG_BLANK,    //执行日志无数据
    LUMI_HOME_SCENE_BLANK,    //首页场景为空
    LUMI_HOMEKIT_DEVICE_BLANK,  // HomeKit设备列表
    LUMI_HOMEKIT_TIGGER_DEVICE_BLANK,   // HomeKit安防卫士可触发设备为空
    LUMI_HOME_EDIT_SCENE_BLANK,    //首页场景为空
    LUMI_SEARCH_DATA_EMPTY,          // 没有搜索到内容(暂无内容)
    LUMI_OVERVIEW_DATA_EMPTY,          // 信息总览为空
    LUMI_NO_CAMERA_FACEID,      //人脸数据为空
    LUMI_CONFIG_PUSH_NODATA,      //配置设备推送无数据
    LUMI_CUSTOM_VOICE_BLANK,      //自定义语音为空
    LUMI_SHOW_REQUEST_ERROR,        // 显示云端error
    LUMI_SHOW_NATIVE_ERROR,         // 无法获取数据文案
    LUMI_NO_CUSTOM_MUSIC,           // 无自定义铃声
};

#endif

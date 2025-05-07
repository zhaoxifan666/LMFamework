//
//  LMMessageFunctionName.h
//  LMFramework
//
//  Created by ruie on 2020/4/20.
//  Copyright © 2020 ruie. All rights reserved.
//


#pragma mark - LHMainMessageMannger 主工程

typedef NS_ENUM(NSUInteger, LMAuthAccountType) {
    LMAuthAccountTypeForgetPassword,
    LMAuthAccountTypeBindPhone,
    LMAuthAccountTypeBindEmail,
    LMAuthAccountTypeReplacePhone,
    LMAuthAccountTypeReplaceEmail,
};

/**
 * app build environment
 * 0：release  1:adhoc 3:debug
 */
static  NSString *const kLMAppBuildEnvironmentKey = @"kLMAppBuildEnvironmentKey";

/**
 *其他模块需要删除用户数据时只需要发送这个通知就可以了
 */
static  NSString *const kLMRemoveUserInfoNotification = @"kLMRemoveUserInfoNotification";

/**
 *token 缺失或者是无效发通知提示用户重新登录
 */
static NSString *const kLMNotificationNeedReLogin = @"kLMNotificationNeedReLogin";

/**
 *登录成功的通知，可以注册这个通知做一些操作
 */
static NSString *const LMLoginSuccessNotification = @"LMLoginSuccessNotification";

/**
 *登录成功的通知，可以注册这个通知做一些操作
 */
//static NSString *const kServiceMainPageShowNotification = @"kServiceMainPageShowNotification";

/**
 *设备下线成功
 */
static NSString *const kLMOfflineMobileNotification = @"kLMOfflineMobileNotification";

/**
 *主工程
 */
static NSString *const kFWMsgMainProject = @"msg_main_function";

/**
 *打开完整的url
 */
static NSString *const kFWMsgMainOpenh5Url = @"msg_open_weburl_function";
/**
 * 打开完整的url，根据一些参数拼接url和回调
 */
static NSString *const kFWMsgMainOpenH5UrlWithParam = @"msg_open_weburl_with_param_function";

/// 控制器参数的Key
static NSString *const kParamController = @"kParamController";
/// 在iPad分屏情况下，用来设置右侧导航控制器的根视图；在iPhone上会执行Push方法；
static NSString *const kFWMsgMainShowDetailViewControllerWithParam = @"msg_show_detail_view_controller_function";

/**
 *打开完整的url
 */
static NSString *const kFWMsgMainPresentH5Url = @"msg_present_weburl_function";
/**
 *打开homekith5
 */
static NSString *const kFWMsgMainOpenHomeKitUrl = @"msg_open_homekit_h5_function";
/**
 *跳转myguard
*/
static NSString *const kFWMsgMainProjectJumpMyguard = @"msg_main_jump_myguard";
/**
 *跳转历史
*/
static NSString *const kFWMsgMainProjectJumpMyguardHistory = @"msg_main_jump_myguard_history";
/**
 *跳转场景
*/
static NSString *const kFWMsgMainProjectJumpScene = @"msg_main_jump_add_scene";
/**
 *跳转添加场景
*/
static NSString *const kFWMsgMainProjectJumpAddScene = @"msg_main_jump_add_scene";
/**
 *跳转自动化
*/
static NSString *const kFWMsgMainProjectJumpAutomation = @"msg_main_jump_automation";

/**
 *获取当前家
*/
static NSString *const kFWMsgMainProjectGetCurrentPosition = @"msg_main_get_currentPosition";

/**
 *获取是否是家庭成员
 */
static NSString *kFWMsgMainProjectIsPositionPermissionMember = @"msg_main_IsPositionPermissionMember";

/**
 *获取deviceName
 */
static NSString *kFWMsgMainProjectGetDeviceoOfficialNameWithMode = @"msg_main_GetDeviceoOfficialNameWithModel";

/**
 *获取房间列表
 */
static NSString *kFWMsgMainProjectGetRoomList = @"msg_main_GetRoomList";

/**
 *从云端获取家庭的room列表
 */
static NSString *kFWMsgMainProjectFetchRoomPositionList = @"msg_main_FetchRoomPositionList";

/**
 *获取设备图标
 */
static NSString *kFWMsgMainProjectGetDeviceImageIcon = @"msg_main_getDeviceImageIcon";

/**
 *获取地理位置
 */
static NSString *kFWMsgMainProjectgetCountryName = @"msg_main_getCountrycode";

/**
 *查询设备信息
 */
static NSString *kFWMsgMainProjectFetchDeviceInfos = @"msg_main_device_fetch_detailInfos";

/**
*跳转主工程设备分配位置界面
*/
static NSString *kFWMsgMainProjectManageDevicesPage = @"msg_main_manage_devices_page";
/**
*获取主工程配置的h5 url
*/
static NSString *kFWMsgMainProjectGetH5BaseUrl = @"msg_main_get_H5BaseUrl";

/**
*更新主项目的白名单配置
*/
static NSString *kFWMsgMainProjectUpdateServerConfig = @"msg_update_server_config_function";

// LHBaseAlert公共参数
static NSString *kShowAlertParamView = @"kShowAlertParamView"; // 被弹出的视图
static NSString *kShowAlertParamContainer = @"kShowAlertParamContainer"; // 所在的容器，可以是View或者ViewController
static NSString *kShowAlertParamStyle = @"kShowAlertParamStyle"; // 0:AlertStyle 1:SheetStyle
static NSString *kShowAlertParamContainerStyle = @"kShowAlertParamContainerStyle";// 0:全屏 1:左边分屏 2:右边分屏
static NSString *kShowAlertParamBackgroundTap = @"kShowAlertParamBackgroundTap"; // (BOOL)点击背景是否自动消失

// ActionSheet类型的参数
static NSString *kShowAlertParamSheetHorizontalMargin = @"kShowAlertParamSheetHorizontalMargin"; // 水平外边距
static NSString *kShowAlertParamSheetBottomMargin = @"kShowAlertParamSheetBottomMargin"; // 底部外边距
/**
* 以LHAlertController的形式弹出弹窗
*/
static NSString *kFWMsgMainProjectShowAlertInController = @"msg_show_alert_in_controller_function";
/**
* 以LHShowAlertView的形式弹出弹窗
*/
static NSString *kFWMsgMainProjectShowAlertInView = @"msg_show_alert_in_view_function";
/**
* 隐藏AlertView并回调
*/
static NSString *kFWMsgMainProjectDismissAlertView = @"msg_dismiss_alert_view_function";

///安防单选弹框
static NSString *kFWMsgMainProjectSingleAlarmSelectView = @"lm_msg_show_single_alarm_pop";

///安防picker弹框
static NSString *kFWMsgMainProjectSingleAlarmPickerView = @"lm_msg_show_picker_alarm_pop";

///自动化的自定义弹框
static NSString *kFWMsgMainProjectLinkagePickerView = @"lm_msg_show_linkage_picker";

///自动化定时页面
static NSString *kFWMsgMainProjectLinkageTimerViewController = @"lm_msg_show_linakge_timer";

///自动化地理围栏
static NSString *kFWMsgMainProjectLinkageGeofenceViewController = @"lm_msg_show_linakge_geofence";


#pragma mark - LMBaseMsgMannger 基础模块（登录）

/**
 *第一次打开app登录
 */
static NSString *kFWMsgBaseFrameworkPushLogin = @"msg_push_login_function";
/**
 *将window的root设置为登录页
 */
static NSString *kFWMsgBaseFrameworkWindowLogin = @"msg_window_login_function";

/**
 *进入主页后模态登录
 */
static NSString *kFWMsgBaseFrameworkPresentLogin = @"msg_present_login_function";
/**
 *推出登录默认有动画，这个参数有值时没有动画
 */
static NSString *LMPresentLoginAnimatedHiddenKey = @"LMPresentLoginAnimatedHiddenKey";

/**
 *是否为HomeKit模式
 */
static NSString * kFWIsHomeKitModeKey = @"kFWIsHomeKitModeKey";


/**
 *登录成功后记录一下，切换账号时展示
 */
static NSString *  kLH_LastAccount = @"klh_lastUserAccount";

/**
 *点击头像-->绑定手机号码
 */
static NSString *kFWMsgBaseFrameworkJumpForgetPassword = @"msg_push_forgetPassword_function";

typedef NS_ENUM(NSUInteger, LMUnbindType) {
    LMUnbindTypePhone,
    LMUnbindTypeEmail,
};

/**
 *跳转到PhoneEmailInfo
 */
static NSString *kFWMsgBaseFrameworkJumpPhoneEmailInfo = @"msg_push_phoneEmailInfo_function";

/**
 *跳转到账号删除，修改密码
 */
static NSString *kFWMsgBaseFrameworkJumpChooseAccount = @"msg_push_chooseAccount_function";

/**
 *跳转到账号安全
 */
static NSString *kFWMsgBaseFrameworkJumpAccountSafe = @"msg_push_accountSafe_function";

/// 登陆设备管理
static NSString *kFWMsgBaseFrameworkJumpLoginDeviceManager = @"msg_push_login_device_manager_function";

/**
 *跳转web
 */
static NSString *kFWMsgBaseFrameworkJumpWkWeb = @"msg_base_jump_web";

/**
 *刚启动时定位，获取用户的地区
 */
static NSString *kFWMsgBaseFrameworkStartLocation = @"msg_get_user_location_function";

/**
 *app内语言Key，
 * warining:主工程的shourt里用的，不要随意换字段
 */
static NSString *kLocalizedSetting = @"kLocalizedStringSetting";

typedef enum {
    LMChangeLocationPusTypeNormal,
    LMChangeLocationPushTypeLogin,
    LMChangeLocationPushTypeMine,
    LMChangeLocationPushTypeOther,//从不需要登录的地区进去此界面
} LMChangeLocationViewControllerPushType;

/**
 *地区选择页面
 */
static NSString *kFWMsgBaseFrameworkRegionList = @"msg_push_region_list_page";

typedef NS_ENUM(NSUInteger, kAuthLoginType) {
    kAuthLoginTypeNone = 0, //默认值
    kAuthLoginTypeWechat = 7,//微信登录
    kAuthLoginTypeFacebook = 4,//Facebook登录
    kAuthLoginTypeApple = 6,//苹果登录
    kAuthLoginTypeGoogle = 8, //Google登录
};
/**
 *绑定第三方账号
 */
static NSString *kFWMsgBaseFrameworkBindAuthLogin = @"msg_bind_auth_login";
/**
 *解绑第三方账号
 */
static NSString *kFWMsgBaseFrameworkUnbindAuthLogin = @"msg_unbind_auth_login";
/**
 *检查协议更新
 */
static NSString *kFWMsgBaseFrameworkCheckProtocolVersion = @"msg_check_protocol_version";

static NSString *kFWMsgBaseFrameworkRemoveProtocolCache = @"msg_remove_protocol_cache";

static NSString *kFWMsgBaseFrameworkShowProtocolAlert = @"msg_launch_show_protocol_alert";

#define kUserProtocolAgreeKey    @"kUserProtocolAgreeKey"
#define kUserProtocolTypes @[@"terms_use",@"user_privacy_agreement"]

#define kCN_TEST  @"TEST"
#define kCN  @"CN"
#define kUS  @"US"
#define kOTHER  @"OTHER"
#define kEUROPE  @"EU"
#define kAF  @"AF"
#define kKR  @"KR"
#define kRU  @"RU"
#define kAU  @"AU"
#define kCN_Prev @"CN_PREISSUE"

#pragma mark - 登陆模块

static NSString* kFWMsgGetUserRegionDic = @"msg_get_user_selected_region_dic";

static NSString* kFWMsgGetLatLntDic = @"msg_get_lat_lnt_dic";

static NSString* kFWMsgReportLastDistanct = @"msg_report_last_distanct";

/// 将一组数据（对象）进行索引排序（如通讯录中的索引）
static NSString* kFWMsgSortLocalizedIndexCollation = @"msg_sort_localized_index_collation";

#pragma mark - LMAddDeviceMsgMannger 添加设备

static NSString *kFWMsgAddDeviceFramework = @"msg_add_device_function";  //本管理器主函数
static NSString *kFWMsgAddDeviceFrameworkWifi = @"msg_add_device_wifi";  //wifi入网
static NSString *kFWMsgAddDeviceFrameworkBluetooth = @"msg_add_device_bluetooth";  //bluetooth入网
static NSString *kFWMsgAddDeviceFrameworkHomekit = @"msg_add_device_homekit";  //homekit入网
/// 扫码入网页面
static NSString *kFWMsgAccessNetFrameworkJumpQRScanPage = @"msg_accessnet_jump_QRscan_page";

#pragma mark - AI video 全屋视频

static NSString *kFWMsgAIVideoRequestModels = @"msg_request_aivideo_models";
static NSString *kFWMsgAIVideoRequestCoverImage = @"msg_request_aivideo_coverImage";
static NSString *kFWMsgAIVideoInfo = @"msg_aivideo_info";

#pragma mark - LMCamera(G2/G2H) 摄像机

/**
* @brief 跳转非车险保单列表页
* @ 设备id(did)/设备名称(deviceName)
*/
static NSString *kFWMsgCameraFramework = @"msg_camera_function";  //本管理器主函数
static NSString *kFWMsgCameraMainPageFramework = @"msg_camera_main_page_function";  //摄像头主页
static NSString *kFWMsgCameraFrameworkFullScreenPlay = @"msg_camera_full_screen_play";  //全屏播放页
static NSString *kFWMsgCameraFrameworkPushCameraDeviceInfoPage = @"msg_camera_push_camera_device_info_page";   // 跳转到摄像头设备信息页
static NSString *kFWMsgCameraFrameworkPushCameraHelpPage = @"msg_camera_push_camera_help_page";   // 跳转到摄像头帮助页面
static NSString *kFWMsgCameraFrameworkForceScreenOrientation = @"msg_camera_force_screen_orientation";   // 强制屏幕横竖屏
static NSString *kFWMsgCameraFrameworkChangeAllowRotationValue = @"msg_camera_change_allow_rotation_value";   // 改变横竖屏切换时的变量
static NSString *kFWMsgCameraFrameworkPushMoreSetPage = @"msg_camera_more_set_main_function";   // 跳转至更多页面
static NSString *kFWMsgCameraFrameworkShowHalfPage = @"msg_camera_show_half_page_function";   // 摄像头半屏页
static NSString *kFWMsgCameraFrameworkPushMultiMediaPlayPage = @"msg_camera_push_camera_multi_media_play_page";   // 摄像头视频（多媒体）播放页
static NSString *kFWMsgCameraFrameworkMultiMediaPlayPage = @"msg_camera_camera_multi_media_play_page";   // 摄像头视频（多媒体）播放页

static NSString *kFWMsgCameraFrameworkPushAlbumManagerPage = @"msg_camera_push_album_manager_page";   // 摄像头相册管理列表页
static NSString *kFWMsgCameraFrameworkPushIrcodeListPage = @"msg_camera_push_ircode_list_page";   // 摄像头红外遥控页面
static NSString *kFWMsgCameraFrameworkGetLatestCameraPicture = @"msg_camera_get_latest_camera_picture"; // 获取摄像头最后一帧图像
static NSString *kFWMsgCameraFrameworkPushFirmwareUpdatePage = @"msg_camera_push_firmware_update_page"; // 固件升级
static NSString *kFWMsgCameraFrameworkPushRelatedEventPage = @"msg_camera_push_related_event_page";   // 关联事件列表
static NSString *kFWMsgCameraFrameworkPushFaceVideoListPage = @"msg_camera_push_face_videoList_page";   // 人脸关联的视频列表界面

#pragma mark - 自动化场景
static NSString *kFWMsgAutomationSceneFramework = @"msg_automation_scene_function"; //本管理器主函数
static NSString *kFWMsgAutomationSceneFrameworkSceneEdit = @"msg_sceneedit_function";  //首页跳转到场景页面。

/*-------------------------------------------------------------------------*/
static NSString *kFWMsgAutomationSceneFrameworkPushlinkageEditViewController = @"msg_main_push_linkageEditViewController";
  //跳转到自动化编辑页面。
#define kFlinkageGroupId  @"kFlinkageGroupId"
#define kFlinkageType     @"kFlinkageType"
#define kFlinkageId    @"kFlinkageId"
#define kFlinkagename  @"kFlinkagename"
#define kFisAlertMode  @"kFisAlertMode"
/*---------------------------------------------------------------------*/



/*---------------------------------------------------------------------*/

static NSString *kFWMsgAutomationSceneFrameworkPushSceneEditVc = @"msg_main_push_sceneEditVC";  //跳转到场景编辑页面

#define kFsceneId @"kFsceneId"///sceneid
#define kfscenename @"kfscenename" ///name
#define kfsceneisNew @"kfsceneisNew" ///isnew 字段
#define kfscenetitle @"kfscenetitle" ///title 字段


/*---------------------------------------------------------------------*/

/*---------------------------------------------------------------------*/

static NSString *kFWMsgAutomationSceneFrameworkPushHomeScenelist = @"msg_main_push_homeScenelist";  //跳转到homeScenelist

#define kFhomeSceneCount @"kFhomeSceneCount"///
#define kfhomeScenePanelId @"kfhomeScenePanelId" ///
#define kfhomeSceneCanBackNormal @"kfhomeSceneCanBackNormal" ///
#define kfhomeSceneHomeSceneEditing @"kfhomeSceneHomeSceneEditing" ///

/*---------------------------------------------------------------------*/


/*---------------------------------------------------------------------*/

static NSString *kFWMsgAutomationSceneFrameworkPushDeviceScenelist = @"msg_main_push_deviceScenelist";  //跳转到DeviceScenelist

#define kFdeviceScenelistDeviceId @"kFdeviceScenelistDeviceId"///
 
/*---------------------------------------------------------------------*/


static NSString *kFWMsgAutomationSceneFrameworkDeviceLinkage = @"msg_main_device_linkage";  //单个设备的Linkage

static NSString *kFWMsgAutomationSceneFrameworkDeviceScenelist = @"msg_main_device_scenelist";  //单个设备的sceneList


static NSString *kFWMsgAutomationSceneFrameworkTabbarScene = @"msg_main_get_tabbar_navi_scene";  //tabbarScene。

static NSString *kFWMsgAutomationSceneFrameworkTabbarLinkage = @"msg_main_get_tabbar_navi_linkage";  //tabbarLinkage

static NSString *kFWMsgAutomationSceneFrameworkPushDeviceLinkageViewController = @"msg_main_push_deviceLinkageViewController";  //DeviceLinkageViewController

static NSString *kFWMsgAutomationSceneFrameworkPopToScenAutoEditVC = @"msg_main_pop_scenAutoEditVC";  //返回到自动化或者场景编辑页面






#pragma mark - 家
///传参字段定义
/// @"startIndex" : 当前页数
#define kPositionFrameworkStartIndexKey    @"startIndex"
/// @"size" : 分页大小
#define kPositionFrameworkSizeKey          @"size"
/// @"positionId": 当前家或者房间的id
#define kPositionFrameworkPositionIdKey    @"positionId"
///@"positionName" :家、房间的名字
#define kPositionFrameworkPositionNameKey  @"positionName"
///@"background":家、房间的背景
#define kPositionFrameworkBackgroundKey    @"background"
///@"positionType":创建房间传入 room
#define kPositionFrameworkPositionTypeKey  @"positionType"



#define kPositionFrameworkLocationKey    @"location"
///@"locationId": 家所在位置id
#define kPositionFrameworkLocationIdKey    @"locationId"
///@"timeZone":创建家的时区 房间不需要传此参数
#define kPositionFrameworkTimeZoneKey      @"timeZone"
///位置名称
#define kPositionFrameworkLocationNameKey  @"locationName"
///@"isDefault" : 1默认房间 0不是  创建房间时使用
#define kPositionFrameworkIsDefaultKey     @"isDefault"
///@"homeId" : 当前家Id 请求家下的房间列表时需要传此参数
#define kPositionFrameworkHomeIdKey        @"homeId"

static NSString *kFWMsgPositionFrameworkDestroy = @"msg_position_destory";

static NSString *kFWMsgPositionFrameworkGetHomeid = @"msg_get_current_homeid";


static NSString *kFWMsgPositionFrameworkGetHomePermission = @"msg_get_current_home_permission";

//返回到自动化或者场景编辑页面

//#define kPositionFrameworkNotificationUpdateTypeKey  @"kPositionFrameworkNotificationUpdateType"
//typedef enum {
//    LMPositionFrameworkDidPositionUpdateTypeName,   //更新了名字
//    LMPositionFrameworkDidPositionUpdateTypeLocation,//更新了位置
//    LMPositionFrameworkDidPositionUpdateTypeBackground,//更新了背景
//    LMPositionFrameworkDidPositionUpdateTypeAddHome, //创建了家
//    LMPositionFrameworkDidPositionUpdateTypeAddRoom, //创建了房间
//} LMPositionFrameworkDidPositionUpdateType;
/////通知名字
//#define kFWMsgPositionFrameworkNotificationDidUpdatePosition      @"kFWMsgPositionFrameworkNotificationDidUpdatePosition"
//#define kFWMsgPositionFrameworkNotificationDidAddNewPosition      @"kFWMsgPositionFrameworkNotificationDidAddNewPosition"
//#define kFWMsgPositionFrameworkNotificationDidDeletePosition      @"kFWMsgPositionFrameworkNotificationDidDeletePosition"



//家庭 房间编辑界面入口，push进入
static NSString *kFWMsgPositionHomeListPage = @"msg_position_home_list_page"; //家庭列表入口
// 家庭 房间编辑界面入口;在iPad分屏情况下，用来设置右侧导航控制器的根视图为家庭列表页；在iPhone上会执行Push方法；
static NSString *kFWMsgShowDetailPositionHomeListPage = @"msg_show_detail_position_home_list_page"; //家庭列表入口
static NSString *kFWMsgBuildPositionHomeListPage = @"msg_build_position_home_list_page"; //家庭列表入口
static NSString *kFWMsgPositionRoomManageListPage = @"msg_position_room_manage_list_page"; //房间列表入口


static NSString *kFWMsgPositionCreateHomePage = @"msg_position_create_home_page";//创建家庭入口

static NSString *kFWMsgPositionCreateRoomPage = @"msg_position_create_room_page";//创建房间入口

/// 家庭位置设置界面
/// param @{@"locationType" : 0 = home // 1 = child // 2 = weather,  @"locationId" : "位置Id", @"locationName" : "位置name"}
static NSString *kFWMsgPositionSelectLocationPage = @"msg_position_select_location_page"; //家庭地理位置选择入口

static NSString *kFWMsgBuildPositionSelectLocationPage = @"msg_build_position_select_location_page"; //Build家庭地理位置选择页面

static NSString *kFWMsgPositionDeviceAssignRoomListPage = @"msg_position_device_assign_room_list_page"; //设备分配房间功能的可选房间列表界面

/// 新添加设备分配房间界面
/// params @{@"positionId" : "当前房间Id", @"isSelectedRecommendRoom" : 是否需要推荐房间}
/// block @{@"positionId" : "当前房间Id", @"isSelectedRecommendRoom" : 最后选择的是否是推荐房间}
static NSString *kFWMsgPositionNewAddedSingleDeviceAssignRoomPage = @"msg_position_new_added_single_device_assign_room_page";//新添设备分配房间

/*
 *编辑家庭房间背景界面
 *参数：家庭、房间Id
 */
static NSString * kFWMsgPositionEditWallpaerPage = @"msg_position_edit_wallpaper_page";

/*
*编辑家庭界面
*参数：家庭id
*/
static NSString * kFWMsgPositionHomeSettingPage = @"msg_position_home_setting_page";

/*
 设备人脸列表界面
 @{
   @"homeId" : @"设备所在家的Id",
   @"deviceId" : @"设备的did",
 }
 */
static NSString * kFWMsgPositionFaceListPage = @"msg_position_face_list_page";


static NSString * kFWMsgPositionSelectHomeInfo = @"msg_position_current_home_info";

static NSString * kFWMsgPositionSelectHomeDefaultRoomInfo = @"msg_position_current_room_info";


///位置模块相关请求
///
///
/// 获取原始位置信息
/// params 请求参数
/// @"startIndex" : 当前页数
/// @"size" : 分页大小
/// @"positionId": 当前家的id(如果当前页数==0 需要带上当前APP选择的家庭id, 这样云端就能在第一页返回该家庭)
static NSString *kFWMsgPositionFrameworkGetAllPositionData = @"msg_position_get_all_position_data";  //获取家的数据


///获取某个家下的房间列表数据
/// params 请求参数
/// @"homeId" : 当前家Id,
/// @"size" : 分页大小,
/// @"startIndex" : 当前页数,
static NSString *kFWMsgPositionFrameworkGetRoomListData = @"msg_position_get_room_list_data";  //获取某个家下的房间列表数据

/// 创建家庭请求接口
/// params @{@"homeName" : 名字  @"background" : @"背景"，@"timeZone": 时区,@“locationId” : 位置id , @"timeZoneAutoSwitch" : bool 是否开启自动转换夏令时}
/// block 结果回调
static NSString *kFWMsgPositionFrameworkCreateHome = @"msg_position_create_home";

/// 创建房间请求接口
/// params @{"positionId" : 家的ID，@"roomName" : 房间名字  @"background" : @"房间背景"， @"isDefault" : Bool是否是默认房间}
/// block 结果回调 LMPositionRoom
static NSString *kFWMsgPositionCreateRoom = @"msg_position_create_room";


///分配设备到房间
///params @"did" : 设备的did positionId:房间id
static NSString *kFWMsgPositionAssignDeivcesToRoom = @"msg_position_assign_devices_to_room"; //分配设备到房间请求
///设置家庭位置
/// params @{@"homeId":家庭id @"timeZone": 时区,@“locationId” : 位置id , @"timeZoneAutoSwitch" : bool 是否开启自动转换夏令时}
static NSString *kFWMsgPositionSettingLocationRequest = @"msg_position_setting_location_request";

///获取当前家的背景
//param: 家庭id
static NSString *kFWMsgPositionGetHomeCurrentBackgroundRequest = @"msg_position_get_home_current_background_request";

/// 显示添加人脸引导视图
static NSString *kFWMsgPositionShowAddHumanFaceGuidePage = @"msg_position_show_add_human_face_guide_page";

/// 显示人脸协议弹窗
static NSString *kFWMsgPositionShowFaceRecognizePrivacyPage = @"msg_position_show_faceRecognizePrivacy_page";

#pragma mark - 安防卫士
static NSString *kShowAlertPopStyle = @"kShowAlertPopStyle"; // 0:底部 1:中间
static NSString *kShowAlertAbnormalDeviceDataMap = @"kShowAlertAbnormalDeviceDataMap"; // 布防接口返回的数据

static NSString *kShowAlertAbnormalDeviceActionType = @"kShowAlertAbnormalDeviceActionType"; // 0:取消布防 1:继续布防

/**
 @{
 kShowAlertPopStyle: @0, // 0:底部 1:中间
 kShowAlertAbnormalDeviceDataMap: @{}
 }
 */
static NSString *kFWMsgShowAlertAbnormalDevice = @"msg_show_alert_abnormal_device";   // 弹出安防异常设备列表

/**
 @{
 kShowAlertPopStyle: @0, // 0:底部 1:中间
 @"modelName": @"7*24h守护",
 @"positionId": [LMPositionDataManager sharedLMPositionDataManager].selectedHome.homeId,
 @"linkageId": @"L.99623842120890429443",
 @"isBaseMode": @YES,
 @"configured": @YES,
 @"enable@": @YES,
 }
 */
static NSString *kFWMsgShowBaseAlertPopView = @"msg_show_base_alert_pop_view";   // 弹出基础安防说明

#pragma mark - 曲线模块
static NSString *kFWMsgChartFrameworkCurveLineMainEntry = @"lm_msg_chart_main";   // 单曲线入口 - 温度，湿度，大气压。。。
static NSString *kFWMsgChartFrameworkCheckCurrentDataDetailPage = @"msg_chart_check_current_data_detail_page";  // 当前数据明细入口
static NSString *kFWMsgChartFrameworkLandscapeScreenAction = @"msg_chart_landscape_screen_action";  // 横屏操作
static NSString *kFWMsgChartFrameworkCheckMoreInfoMsgAction = @"msg_chart_check_more_info_msg_action";  // 查看更多信息操作
static NSString *kFWMsgChartFrameworkChangeAllowRotationValue = @"msg_chart_change_allow_rotation_value";   // 改变横竖屏切换时的变量
static NSString *kFWMsgChartFrameworkShowSingleCurveView = @"msg_chart_show_single_curve_view";   // 显示单一的曲线
static NSString *kFWMsgChartFrameworkGetMonthYearEntryConfig = @"msg_chart_get_month_year_entry_config";    // 获取月年曲线入口白名单

#pragma mark - 灯光模块
/// 灯光序列 添加+编辑 详情页
static NSString *kFWMsgLightDynamicProfile = @"lm_msg_light_dynamic_profile";


#pragma mark - 红外模块
/// 红外控制页面
static NSString *kFWMsgIrcodeControlViewPage = @"msg_ircode_control_view_page";

/// 红外添加，遥控器类型选择页面
static NSString *kFWMsgIrcodeDeviceTypeMatchViewPage = @"msg_ircode_device_match_view_page";

/// 空调伴侣P3热水器、空调匹配是否插好引导页面
static NSString *kFWMsgAcP3InsertGuideViewPage = @"msg_acp3_insert_guide_view_page";

/// 空调伴侣P3参数校正页面
static NSString *kFWMsgAcP3ParamsSettingViewPage = @"msg_acp3_params_setting_view_page";

/// 空调伴侣安睡模式页面
static NSString *kFWMsgAcP3SleepMainViewPage = @"msg_acp3_sleep_main_view_page";

/// 空调伴侣速冷模式页面
static NSString *kFWMsgAcP3QuickCoolViewPage = @"msg_acp3_quick_cool_view_page";

/// 空调伴侣温湿度绑定页面
static NSString *kFWMsgAcBindTemperatureViewPage = @"msg_acp3_bind_temperature_view_page";

/// 空调伴侣红外学习loading页面
static NSString *kFWMsgAcIrcodeLearnViewPage = @"msg_acp3_ircode_learn_view_page";

/// 红外添加遥控器成功跳转
static NSString *kFWMsgIrAddRemoteToSuccessViewPage = @"ir_add_success_view_page";

/**
 *跳转设备信息页面
 */
static NSString *const kLMFWMsgDeviceDetailInfoPage = @"lm_msg_device_main";

#pragma mark - 跳转AqaraHome页面，不同模块均可使用

/// 自动化页面
static NSString *const kLMAqaraDeviceAutomationPage = @"prefab_aqara_device_automation_page";

/// 场景页面
static NSString *const kLMAqaraDeviceScenePage = @"prefab_aqara_device_scene_page";

/// 首页卡片页面
static NSString *const kLMAqaraDeviceMainpageCardPage = @"prefab_aqara_device_mainpage_card_page";

/// 所属网关页面
static NSString *const kLMAqaraDeviceParentpage = @"prefab_aqara_device_parent_page";

/// 设备位置页面
static NSString *const kLMAqaraDevicePositionPage = @"prefab_aqara_device_position_page";

static NSString *const kLMAqaraDeviceConfigNetSDK = @"prefab_aqara_device_config_accessNetSDK";


/// 跳转设备控制页面
static NSString *const kLMAqaraDeviceRouterPage = @"prefab_aqara_device_router ";

#pragma mark - RemoteLock

static NSString *const kFWMsgMainProjectRemoteLockSetEffectiveTimestamp = @"lm_msg_doorlock_setEffectiveTimestamp";

static NSString *const kFWMsgMainProjectRemoteLockGetEffectiveTimestamp = @"lm_msg_doorlock_getEffectiveTimestamp";

static NSString *const kFWMsgMainProjectRemoteLockControlLockState = @"lm_msg_doorlock_controlLockState";

#pragma mark - SecurityGuard
/// 安防设置页面
static NSString *const kFWMsgSecurityGuardSettingPage = @"msg_security_guard_page";


//
//  LMAppDefine.h
//  AqaraHome
//
//  Created by ruie on 2019/10/21.
//  Copyright © 2019 Lumi United Technology Co., Ltd. All rights reserved.
//


//#ifdef DEBUG
//
//# define NSLog(fmt, ...) NSLog((@"[file:%s]\n" "[method:%s]\n" "[line:%d] \n" fmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);

//# define NSLog(fmt, ...) NSLog((@"[file:%s]\n" "[method:%s]\n" "[line:%d] \n" fmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);
//
//#define debugMethod() NSLog(@"%s", __func__)
//
//#else
//
////#define NSLog(...)
//
//#define debugMethod()
//
//#endif


////key for Noti
//#define kLHNotificationLoginKey (@"kLHNotificationLoginKey")
#import <UIKit/UIKit.h>


// 以iPhone 6为标准尺寸计算比例
#define kScale   (kScreenWidth/375)
// 类似REM，但不止于font size
#define kRC(pt)  ((pt) * kScale)

#define kFont(x)                [UIFont systemFontOfSize:x]
#define kBoldFont(x)            [UIFont boldSystemFontOfSize:x]

#define kRCForMyGuard(pt) kRC(pt) * (375/360)



//单例初始化
#define SINGLETON_HEADER(className) \
\
+ (className *)shared##className;

#define SINGLETON_CLASS(className) \
\
+ (className *)shared##className { \
static className *shared##className = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
shared##className = [[className alloc] init]; \
}); \
return shared##className; \
}


#define SVDECLARE_SINGLETON() + (instancetype)sharedInstance;

#define SVIMPLEMENT_SINGLETON(_class_name) \
    + (instancetype)sharedInstance \
    { \
        static _class_name * aInstance = nil; \
        static dispatch_once_t onceToken; \
        dispatch_once(&onceToken, ^{ aInstance = [[_class_name alloc] init]; }); \
        return aInstance; \
    }



#define isIOS11                             ([[[UIDevice currentDevice] systemVersion] floatValue]>=11)
#define isIOS12                             ([[[UIDevice currentDevice] systemVersion] floatValue]>=12)
#define isIOS13 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 13)

#define kScreenWidth                [UIScreen mainScreen].bounds.size.width
#define kScreenHeight               [UIScreen mainScreen].bounds.size.height

#define Global()                           [AppDelegate shareAppDelegate]


#define kFooterSectionHeight (9 * kWidthScale)
#define kFooterLineHeight 1
//十六进制颜色宏 参数格式为：0xFFFFFF，建议少用，一般颜色在下面都有相应的宏代表
#define RGBHex(rgbValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16)) / 255.0 \
green:((float)((rgbValue & 0xFF00) >> 8)) / 255.0 \
blue:((float)(rgbValue & 0xFF)) / 255.0 alpha:1.0]

#define RGBAHex(rgbValue, a) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16)) / 255.0 \
green:((float)((rgbValue & 0xFF00) >> 8)) / 255.0 \
blue:((float)(rgbValue & 0xFF)) / 255.0 alpha:a]

#define kGrayColor                  [LHColorTool colorWithRGB:0xe5e5e5]
#define kNewBlueColor               [LHColorTool colorWithRGB:0x4660FF]
#define kBlueColor_CP2              RGBHex(0x5B87E1)

#define kCellSeperatorLineColor     [LHColorTool colorWithRGB:0xdde1e3]
#define kHardBlackColor             [LHColorTool colorWithRGB:0x000000 alpha:0.9]
#define kPureBlackColor             [LHColorTool colorWithRGB:0x000000 alpha:1.0]
#define kMiddleDownBlackColor       [LHColorTool colorWithRGB:0x000000 alpha:0.5]
#define kDetailTextColor            [LHColorTool colorWithRGB:0x999999]
#define kTitleTextColor             [LHColorTool colorWithRGB:0x333333]
#define kPageBackgroundColor        [UIColor whiteColor]
#define kNewPageBackgroundColor     RGBHex(0xf3f4f7)
#define kLightBlckColor             [LHColorTool colorWithRGB:0x000000 alpha:0.2]
#define kBackgroundBlueColor        [LHColorTool colorWithRGB:0x4660FF]
#define kSubtitleTextColor          [LHColorTool colorWithRGB:0x666666]


#define kAlertTitleColor     [LHColorTool colorWithRGBString:@"aaaaaa"]
#define kAlertCommonButtonTitleColor     [LHColorTool colorWithRGBString:@"000000"]
#define kAlertCancelButtonTitleColor     [LHColorTool colorWithRGBString:@"666666"]
#define kAlertConfirmButtonTitleColor    [LHColorTool colorWithRGBString:@"4660FF"]

#define SafeAreaInsets      [UIApplication safeAreaInsetsEdge]

#define OneLineHeight   ([UIScreen mainScreen].scale>0.0?(1 / [UIScreen mainScreen].scale):1.0)


#define kHighCellHeight (80 * kWidthScale)
#define kCommonCellHeight (70 * kWidthScale)
#define kLowCellHeight (60 * kWidthScale)

#define kNSUserDefaults [NSUserDefaults standardUserDefaults]


#define STATUSBAR_HEIGHT                    [UIApplication sharedApplication].statusBarFrame.size.height
#define NAVIGATIONBAR_HEIGHT_NORMAL         (isIPad ? 56 : 44)
#define NAVIGATIONBAR_HEIGHT(vc)            (isIPad ? (kCommonViewHeight(vc) == kScreenHeight ? 50 : 56) : 44)
#define ORIGIN_TOP_NORMAL(vc)               (isIPad ? (kCommonViewHeight(vc) == kScreenHeight ? (STATUSBAR_HEIGHT + NAVIGATIONBAR_HEIGHT(vc)) : NAVIGATIONBAR_HEIGHT(vc)) : (STATUSBAR_HEIGHT + NAVIGATIONBAR_HEIGHT(vc)))

#define IS_LANDSCAPE    ([UIScreen mainScreen].bounds.size.width > [UIScreen mainScreen].bounds.size.height)
#define kWINDOWWIDTH    (MIN([UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height))
#define kWINDOWHEIGHT   (MAX([UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height))
#define kCommonViewWidth(super)            [LHUITool lhSmartCurrentViewWidthWithSuper:super]
#define kCommonViewHeight(super)           [LHUITool lhSmartCurrentViewHeightWithSuper:super]
#define kHeightScale                ((MAX(kScreenHeight,kScreenWidth))/667.f)
#define kWidthScale                 ((isRealIPad ? 375 : (MIN(kScreenWidth,kScreenHeight)))/375.f)

#define kFitIXHeight(height)        (isIOS11 ? height * (IS_IPHONE_X ? ((kScreenHeight - [UIApplication safeAreaInsetsEdge].bottom - ORIGIN_TOP_NORMAL(self))/(667.f - 64)) : (kScreenHeight/667.f)) : height * kHeightScale)


#define isIPad                      [[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad
#define isRealIPad                  ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad || [[[NSUserDefaults standardUserDefaults] valueForKey:@"isPortrait"] boolValue])

static inline BOOL isIPhoneXSeries() {
    if (@available(iOS 11.0, *)) {
        UIWindow *mainWindow = [[[UIApplication sharedApplication] delegate] window];
        if (mainWindow.safeAreaInsets.bottom > 0.0) {
            return YES;
        }
    }
    return NO;
}
#define IS_IPHONE_X                         ([UIApplication sharedApplication].windows[0].safeAreaInsets.bottom > 0)
#define UI_IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;
#define OneLineHeight   ([UIScreen mainScreen].scale>0.0?(1 / [UIScreen mainScreen].scale):1.0)


#ifndef LHLaunchItem_h
#define LHLaunchItem_h

typedef struct{
    char * _Nonnull key;
    char * _Nonnull name;
    void (* _Nonnull function)(void);
} LHExportedFunction;

#define LH_FUNCTION_EXPORT(key,name) \
static void _LH##key(void); \
__attribute__((used, section("__DATA," "__"#key))) \
static const LHExportedFunction __Func##key = (LHExportedFunction){(char *)(&#key),(char *)(&#name), (void *)(&_LH##key)}; \
static void _LH##key \

#endif /* LHLaunchItem_h */

//key for NSUserDefaults
#define kNSUserDefaults [NSUserDefaults standardUserDefaults]

#define kNSUserDefaultsKeyWithUid(key) [NSString stringWithFormat:@"%@_%@",key,[LMLoginUtil getUserId]]


#define kIsFristTimeOpenAqaraApp (@"kIsFristTimeOpenAqaraApp")//第一次启动app标签


#define KAppSwtichLanguageNotification @"KAppSwtichLanguageNotification"

#define KAppTabBarHiddenNotification @"KAppTabBarHiddenNotification"

#define KAppOtherWindowDismissNotification @"KAppOtherWindowDismissNotification"


#define kNSUserDefaultsForUserPlanSwitchKey kNSUserDefaultsKeyWithUid(@"kNSUserDefaultsForUserPlanSwitchKey")


//key for Noti
#define kLHNotificationLoginKey (@"kLHNotificationLoginKey")

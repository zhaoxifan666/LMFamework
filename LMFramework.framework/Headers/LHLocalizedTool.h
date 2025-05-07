//
//  LHLocalizedTool.h
//  AqaraHome
//
//  Created by ayanami on 2017/11/20.
//  Copyright © 2017年 MadHeart. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LHLocalizedTool : NSObject

@property (nonatomic, strong)   NSBundle *localizedBundle;
@property (nonatomic, readonly) NSArray  *availableLans;    /// app支持的语言类型
@property (nonatomic, readonly) NSArray  *availablelanguagesName; /// app支持的语言名称
+ (instancetype)shareInstance;
- (void)setLanguage:(NSString *)language;
- (NSString *)appCurrentLanguage;                              /// 当前app的语言
- (NSString *)appCurrentLanguageName;                              /// 当前app的语言名称
/// 当前app的多语言(zh-CN)
- (NSString *)currentLanguage;
- (NSString *)appCurrentLanguageForServer;                              /// 当前app的语言对应服务器语言
- (NSString *)systemInternalLanguageBundleName;                /// 系统自带的多语言也根据app内部设置的语言走,所以需要指定系统内部的语言bundle.
/// 当前app的语言是否是中文（简体，港台都认为是中文）
+ (BOOL)isChinese;
/// 当前语言是否为zh-Hans
+ (BOOL)isZhHans;
/// 从右至左显示
+ (BOOL)isRTLStyle;

+ (NSString * _Nonnull)localizedStringForKey:(NSString *)key comment:(NSString *)comment;

///多语言读取方法
NSString* _Nonnull LMBundleNSLocalizedString(NSString* key,NSString* value);

@end

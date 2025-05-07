//
//  LMBundle.h
//  LMFramework
//
//  Created by wq on 2020/2/28.
//  Copyright © 2020 ruie. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMBundle:NSObject

+ (NSString *)KOD_localizedStringForKey:(NSString *)key comment:(nullable NSString*)comment __attribute__((deprecated("已过时，请使用LMBundleNSLocalizedString")));


+ (NSString *)localizedStringForBundle:(NSString*)bundleName key:(NSString *)key comment:(nullable NSString *)comment __attribute__((deprecated("已过时，请使用LMBundleNSLocalizedString")));

+ (UIImage *)imageWithbundleName:(NSString*)bundleName contentsOfFileName:(NSString *)imgName;


/**
 *基础模块获取图片的方法
 *其他模块继承这个类，然后重写这个方法
 */
+ (UIImage *)imageWithContentsOfFileName:(NSString *)imgName;

///获取data数据
+ (NSData *)dataWithContentsOfFileName:(NSString *)imgName;
@end

NS_ASSUME_NONNULL_END

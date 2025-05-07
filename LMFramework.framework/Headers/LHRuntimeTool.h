//
//  LHRuntimeTool.h
//  AqaraHome
//
//  Created by 赵希帆 on 2018/5/16.
//  Copyright © 2018年 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LHRuntimeTool : NSObject

/**
 实例方法交换
 
 @param cls 交换方法的类
 @param originalSelector 原始方法
 @param swizzledSelector 交换方法
 */
extern void swizzleInstanceMethod(Class cls, SEL originalSelector, SEL swizzledSelector);

/**
 类方法交换
 
 @param cls 交换类方法的类
 @param originalSelector 原始类方法
 @param swizzledSelector 交换类方法
 */
extern void swizzleClassMethod(Class cls, SEL originalSelector, SEL swizzledSelector);

/**
 实例方法交换（用于hook代理方法）

 @param originalClass 目标类
 @param originalSel 目标类实例方法
 @param replacedClass 替换类
 @param replacedSel 替换类实例方法 （当目标类实现代理）
 @param noneSel 替换类实例方法 （当目标类没有实现代理方法）
 */
extern void Hook_Method(Class originalClass, SEL originalSel, Class replacedClass, SEL replacedSel, SEL noneSel);

@end

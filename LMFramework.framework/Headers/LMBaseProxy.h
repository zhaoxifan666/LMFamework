//
//  BaseProxy.h
//  DarkMode
//
//  Created by ruie on 2022/4/19.
//  Copyright © 2022 ruie. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <WebKit/WKWebView.h>

@class UIViewController;

@protocol ProxyDelegate <NSObject>

@required

- (void)evaluatingJavaScript:(NSString*)funcName params:(id)params;

- (void)evaluatingJavaScript:(NSString*)jsCode  completionHandler:(void (^)(id param, NSError *error))completionHandler;


@end

@interface LMBaseProxy : NSObject
@property(nonatomic, weak) id<ProxyDelegate> delegate;
//预留 传入vc机类 可以让h5k控制导航状态
@property(nonatomic, weak) UIViewController *vc;

- (void)evaluatingJavaScript:(NSString*)funcName params:(id)params;

//- (void)evaluatingJavaScript:(NSString*)jsCode;

@end

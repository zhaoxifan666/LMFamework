//
//  LHNavigationDecoration.h
//  AqaraHome
//
//  Created by 赵希帆 on 2019/4/22.
//  Copyright © 2019 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

typedef void(^LHNavigationDecorationHandler)(UINavigationController * _Nullable navigationController);

@interface LMNavigationDecoration : NSObject

- (instancetype)initWithNavigationController:(UINavigationController * _Nullable)navigationController;

- (void)addUpdates:(LHNavigationDecorationHandler _Nullable)updates;
- (void)reset:(LHNavigationDecorationHandler _Nullable)reset;

- (void)doDecorate;

@end

NS_ASSUME_NONNULL_END

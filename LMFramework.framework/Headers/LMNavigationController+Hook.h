//
//  LMNavigationController+Hook.h
//  LMFramework
//
//  Created by Hao on 2021/12/3.
//  Copyright © 2021 Lumi United Technology Co., Ltd. All rights reserved.
//

#import "LMNavigationController.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMNavigationController (Hook)

@property (assign, nonatomic) BOOL lh_realNavigationBarHidden;

- (void)lh_setNavigationBarHidden:(BOOL)hidden animated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END

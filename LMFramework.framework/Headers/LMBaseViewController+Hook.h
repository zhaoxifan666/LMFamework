//
//  LMBaseViewController+Extension.h
//  LMFramework
//
//  Created by Hao on 2021/12/1.
//  Copyright © 2021 Lumi United Technology Co., Ltd. All rights reserved.
//

#import "LMBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMBaseViewController (LMPrivate)
///为了解决childVC闪现的问题
@property (assign, nonatomic) BOOL lh_isHiddenChildVCNavigationbar;

@property (nonatomic, assign) BOOL lh_hideFakeNaviBar;

- (void)lh_setNeedsUpdateNavigation;
- (void)lh_performBatchUpdates:(void(^)(UINavigationController * _Nullable navigationController))updates;
@end

NS_ASSUME_NONNULL_END

//
//  LMLoadingView.h
//  LMFramework
//
//  Created by jeremy on 2021/7/26.
//  Copyright © 2021 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMLoadingView : UIImageView

- (instancetype)initWithLoadingImage:(UIImage *)image;

- (void)lmStartLoading;

- (void)lmEndLoading;

@end

NS_ASSUME_NONNULL_END

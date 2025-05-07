//
//  LMWKWebViewController.h
//  DarkMode
//
//  Created by ruie on 2022/4/19.
//  Copyright © 2022 ruie. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LMBaseViewController.h"
NS_ASSUME_NONNULL_BEGIN

@interface LMWKWebViewController : LMBaseViewController
-(instancetype)initWithHiddenNav:(BOOL)isHidden;
@property(nonatomic, strong) NSURL *url;
@end

NS_ASSUME_NONNULL_END

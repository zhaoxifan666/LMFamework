//
//  LHNavigationControllerProtocol.h
//  AqaraHome
//
//  Created by 赵希帆 on 2019/4/22.
//  Copyright © 2019 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol LMNavigationControllerProtocol<NSObject>

@optional
- (void)lh_configNavigationController:(UINavigationController *)navigationController;
- (void)lh_configNavigationItem:(UINavigationItem *)navigationItem;

@end



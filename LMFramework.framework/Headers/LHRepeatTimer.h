//
//  LHRepeatTimer.h
//  AqaraHome
//
//  Created by 绿米 on 2019/5/6.
//  Copyright © 2019 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface LHRepeatTimer : NSObject

@property(nonatomic)CGFloat starTime;

@property(nonatomic)CGFloat endTime;

@property(nonatomic, strong)NSString *starTimeStr;

@property(nonatomic, strong)NSString *endTimeStr;

@property(nonatomic, strong)NSString *repeatStr;

@property(nonatomic, strong)NSMutableArray *repeatDays;

- (void)converStrToTimerInterval;

- (void)convertIntervalToStr;

- (void)converStrToStartTimerInterval;

- (void)converStrToEndTimerInterval;

@end

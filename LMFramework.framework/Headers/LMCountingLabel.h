//
//  LMCountingLabel.h
//  AqaraHome
//
//  Created by MadHeart on 2017/12/5.
//  Copyright © 2017年 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, LMCountingLabelType) {
    LMCountingLabelTypeDefault,
    LMCountingLabelTypeMinSec, // 03:30
};

@interface LMCountingLabel : UILabel

@property (nonatomic, assign) LMCountingLabelType type;

@property (nonatomic, assign) CGFloat duration;
@property (nonatomic, strong) NSString *valueUnit;//单位符号

@property (nonatomic, assign) CGFloat progressUnitTextFontSize; // 中间进度单位文案字体大小

- (void)countingFrom:(CGFloat)fromValue to:(CGFloat)toValue;
- (void)countingFrom:(CGFloat)fromValue to:(CGFloat)toValue duration:(CGFloat)duration;
- (void)pause:(BOOL)flag;
@end

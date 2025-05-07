//
//  LMSinglePickerView.h
//  LMMeshDriverFramework
//
//  Created by 江顺金 on 2021/5/23.
//  Copyright © 2021 Lumi United Technology Co., Ltd. All rights reserved.
//

#import "LMBasePopView.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMPickerValueModel : NSObject

@property (nonatomic, strong) NSString *name;

@property (nonatomic, strong) NSString *value;

@end

@interface LMSinglePickerModel : NSObject

@property (nonatomic, assign) CGFloat viewHeight;

@property (nonatomic, strong) NSString *name;

@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) NSString *cancelBtnTitle;

@property (nonatomic, strong) NSString *confirmBtnTitle;

@property (nonatomic, strong) NSString *unit;

@property (nonatomic, strong) NSString *defaultValue;

@property (nonatomic, strong) NSMutableArray<LMPickerValueModel *> *valueList;

@property (nonatomic, assign) NSInteger selectedIndex;

@property (nonatomic, copy) void(^handleSelectionBlock)(NSInteger selectedIndex, NSString *selectedValue);

@end

@interface LMSinglePickerView : LMBasePopView

@property (nonatomic, copy) void(^confirmButtonAction)(NSInteger selectedIndex, NSString *selectedValue);

@property (nonatomic, copy) void(^cancelButtonAction)(void);

- (instancetype)initWithModel:(LMSinglePickerModel *)model;

@end

NS_ASSUME_NONNULL_END

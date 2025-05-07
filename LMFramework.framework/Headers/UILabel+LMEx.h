//
//  UILabel+ex.h
//  LMFramework
//
//  Created by ruie on 2019/11/12.
//  Copyright © 2019 ruie. All rights reserved.
//


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UILabel (LMEx)
+ (CGSize)labelSizeWithContent:(NSString *)content font:(UIFont *)font size:(CGSize)size;

- (void)setSpaceForLabelWithLineSpace:(float)lineSpace WordSpace:(float)wordSpace;

@end

NS_ASSUME_NONNULL_END

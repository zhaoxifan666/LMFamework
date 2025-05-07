//
//  NSString+Date.h
//  LMFramework
//
//  Created by ruie on 2019/11/22.
//  Copyright © 2019 ruie. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (Date)
+ (NSString *)getNowTimeTimestamp;
+ (NSInteger)getTimeIntervalWith:(NSTimeInterval)startTime endTime:(NSTimeInterval)endTime;
@end

NS_ASSUME_NONNULL_END

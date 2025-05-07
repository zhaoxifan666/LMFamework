//
//  LMSafeMutableDictionary.h
//  LMFramework
//
//  Created by Hao on 2023/8/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMSafeMutableDictionary : NSObject

- (void)setObject:(id)object forKey:(id<NSCopying>)key;

- (id)objectForKey:(id)key;

- (void)removeObjectForKey:(id)key;

- (void)removeAllObjects;

- (NSArray *)allKeys;

- (NSArray *)allValues;

@end

NS_ASSUME_NONNULL_END

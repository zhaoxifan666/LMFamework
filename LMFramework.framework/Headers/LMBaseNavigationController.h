//
//  LMBaseNavigationController.h
//  LMNavTool
//
//  Created by 禹祥瑞 on 2021/5/21.
//

#import <Foundation/Foundation.h>
#import "LMNavigationController.h"
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface LMBaseNavigationController : LMNavigationController

@property(nonatomic, assign)BOOL lm_presentAnimationToPush;


- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated  titleLabelText:(NSString *)title;

- (void)setViewControllers:(NSArray *)viewControllers animated:(BOOL)animated titleLabelText:(NSString *)title;

- (void)removeViewController:(UIViewController *)controller;

- (void)popToViewControllerWithClassName:(NSArray<NSString *> *)namesArray;

@end

NS_ASSUME_NONNULL_END

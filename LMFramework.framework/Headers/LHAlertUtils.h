//
//  LHAlertUtils.h
//  AqaraHome
//
//  Created by MadHeart on 2017/12/6.
//  Copyright © 2017年 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, LHUIAlertActionStyle) {
    LHUIAlertActionStyleBlue = 3, //蓝色
    LHUIAlertActionStyleGray = 4, //灰色
};

typedef enum : NSUInteger {
    LHAlertTextVerifyNone,
    LHAlertTextVerifyDeviceAndService,
    LHAlertTextVerifyEmojiText,
    LHAlertTextVerifySpecialCharacter,
} LHAlertTextVerifyType;

@interface LHAlertUtils : NSObject

+ (instancetype)instance;

+ (UIAlertController *)alertWithTitle:(NSString *)title
                              message:(NSString *)message
                         actionTitles:(NSArray *)actionTitles
                         actionStyles:(NSArray *)actionStyles
                        actionHandler:(void(^)(int))actionHandler;

+ (void)alertAlignmentLeftWithTitle:(NSString *)title
                            message:(NSString *)message
                       actionTitles:(NSArray *)actionTitles
                       actionStyles:(NSArray *)actionStyles
                      actionHandler:(void(^)(int))actionHandler;


+ (void)alertSheetWithTitle:(NSString *)title
                    message:(NSString *)message
               actionTitles:(NSArray *)actionTitles
               actionStyles:(NSArray *)actionStyles
           actionSourceView:(UIView *)sourceView
              actionHandler:(void(^)(int))actionHandler;

+ (void)alertSheetWithActionTitles:(NSArray *)actionTitles
                      actionStyles:(NSArray *)actionStyles
                  actionSourceView:(UIView *)sourceView
                     actionHandler:(void(^)(int index))actionHandler;

-(void)alertTextFieldWithTitle:(NSString *)title
                       message:(NSString *)message
                   placeHolder:(NSString *)placeHolder
                  actionTitles:(NSArray *)actionTitles
                  actionStyles:(NSArray *)actionStyles
                 actionHandler:(void(^)(int, NSString *))actionHandler;

-(void)alertTextFieldWithTitle:(NSString *)title
                       message:(NSString *)message
                   placeHolder:(NSString *)placeHolder
                  actionTitles:(NSArray *)actionTitles
                  actionStyles:(NSArray *)actionStyles
                textVerifyType:(LHAlertTextVerifyType)textVerifyType
                 actionHandler:(void(^)(int, NSString *))actionHandler;

- (void)alertTextFieldWithTitle:(NSString *)title
                        message:(NSString *)message
                    placeHolder:(NSString *)placeHolder
                   actionTitles:(NSArray *)actionTitles
                   actionStyles:(NSArray *)actionStyles
                 nullProcessing:(BOOL)nullProcessing
                 textVerifyType:(LHAlertTextVerifyType)textVerifyType
                  actionHandler:(void(^)(int, NSString *))actionHandler;

-(void)alertTextFieldWithTitle:(NSString *)title
                       message:(NSString *)message
               placeHolderText:(NSString *)placeHolderText
                   placeHolder:(NSString *)placeHolder
                  actionTitles:(NSArray *)actionTitles
                  actionStyles:(NSArray *)actionStyles
                textVerifyType:(LHAlertTextVerifyType)textVerifyType
                 actionHandler:(void(^)(int, NSString *))actionHandler;

-(void)alertTextFieldWithTitle:(NSString *)title
                       message:(NSString *)message
               placeHolderText:(NSString *)placeHolderText
                   placeHolder:(NSString *)placeHolder
                  actionTitles:(NSArray *)actionTitles
                  actionStyles:(NSArray *)actionStyles
                    textLength:(NSInteger)textLength
                textVerifyType:(LHAlertTextVerifyType)textVerifyType
                 actionHandler:(void(^)(int, NSString *))actionHandler;

-(void)alertTextFieldWithTitle:(NSString *)title
                       message:(NSString *)message
               placeHolderText:(NSString *)placeHolderText
                   placeHolder:(NSString *)placeHolder
                  actionTitles:(NSArray *)actionTitles
                  actionStyles:(NSArray *)actionStyles
                nullProcessing:(BOOL)nullProcessing
                textVerifyType:(LHAlertTextVerifyType)textVerifyType
                 actionHandler:(void(^)(int, NSString *))actionHandler;

-(void)alertTextFieldWithTitle:(NSString *)title
                       message:(NSString *)message
               placeHolderText:(NSString *)placeHolderText
                   placeHolder:(NSString *)placeHolder
                  actionTitles:(NSArray *)actionTitles
                  actionStyles:(NSArray *)actionStyles
                    textLength:(NSInteger)textLength
                nullProcessing:(BOOL)nullProcessing
                textVerifyType:(LHAlertTextVerifyType)textVerifyType
                 actionHandler:(void(^)(int, NSString *))actionHandler;

-(void)alertTextFieldWithTitle:(NSString *)title
                       message:(NSString *)message
               placeHolderText:(NSString *)placeHolderText
                   placeHolder:(NSString *)placeHolder
                  actionTitles:(NSArray *)actionTitles
                  actionStyles:(NSArray *)actionStyles
                nullProcessing:(BOOL)nullProcessing
                        format:(NSString *)format
                  keyboardType:(UIKeyboardType)keyboardType
                textVerifyType:(LHAlertTextVerifyType)textVerifyType
                 actionHandler:(void(^)(int, NSString *))actionHandler;

-(void)alertTextFieldWithTitle:(NSString *)title
                       message:(NSString *)message
               placeHolderText:(NSString *)placeHolderText
                   placeHolder:(NSString *)placeHolder
                  actionTitles:(NSArray *)actionTitles
                  actionStyles:(NSArray *)actionStyles
                    textLength:(NSInteger)textLength
                nullProcessing:(BOOL)nullProcessing
                        format:(NSString *)format
                  keyboardType:(UIKeyboardType)keyboardType
                textVerifyType:(LHAlertTextVerifyType)textVerifyType
                 actionHandler:(void(^)(int, NSString *))actionHandler;

-(void)alertTwoTextFieldWithTitle:(NSString *)title
                          message:(NSString *)message
                     placeHolders:(NSArray *)placeHolders
                     actionTitles:(NSArray *)actionTitles
                     actionStyles:(NSArray *)actionStyles
                    actionHandler:(void(^)(int, NSString *, NSString *))actionHandler;

+ (UIViewController *)getCurrentVC;

+ (void)showMemberPermissionTips;

@end

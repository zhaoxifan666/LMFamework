//
//  TPKeyboardAvoidingTableView.h
//
//  Created by Michael Tyson on 11/04/2011.
//  Copyright 2011 A Tasty Pixel. All rights reserved.
//
#import<Foundation/Foundation.h>
#import<UIKit/UIKit.h>

@interface TPKeyboardAvoidingTableView : UITableView {
    UIEdgeInsets    _priorInset;
    BOOL            _priorInsetSaved;
    BOOL            _keyboardVisible;
    CGRect          _keyboardRect;
    
    CGFloat         _keyBoardOriginY;
    
    CGPoint         _priorContentOffSet;
}

- (void)adjustOffsetToIdealIfNeeded;
@end

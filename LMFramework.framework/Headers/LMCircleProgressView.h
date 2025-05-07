//
//  LMCircleProgressView.h
//  AqaraHome
//
//  Created by MadHeart on 2017/11/30.
//  Copyright © 2017年 Lumi United Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LMCountingLabel.h"

@interface LMCircleProgressView : UIView

@property (nonatomic, assign) LMCountingLabelType type;

//图形定制
@property (nonatomic, strong) UIColor *lineColor; // 线的颜色
@property (nonatomic, strong) UIColor *pathBackColor;/*环的背景色*/
@property (nonatomic, strong) UIColor *pathFillColor;/**<线条填充色*/
@property (nonatomic, strong) UILabel *progressLabel;

//环形中间的图片定制，可以为空
@property (nonatomic, strong) NSString *imgName;

//角度相关
@property (nonatomic, assign) CGFloat startAngle;/**<起点角度。角度从水平右侧开始为0，顺时针为增加角度。直接传度数 如-90 */
@property (nonatomic, assign) CGFloat reduceAngle;/**<减少的角度 直接传度数 如30*/
@property (nonatomic, assign) CGFloat strokeWidth;/**<线宽*/

@property (nonatomic, assign) CGFloat duration;/**<动画时长*/

@property (nonatomic, assign) BOOL showProgressText;/**<是否显示文字*/
@property (nonatomic, assign) BOOL increaseFromLast;/**<是否从上次数值开始动画，默认为NO*/

@property (nonatomic, assign) BOOL prepareToShow;/**<是否准备好显示, 如果创建好就显示必须在设置完其他属性后最后设置此属性为YES*/

//进度
@property (nonatomic, assign) CGFloat progress;/**<进度 0-100 */
@property (nonatomic, assign) CGFloat startProgress;//初始进度

@property (nonatomic, assign) BOOL isCountDown; //是否是倒计时

@property (nonatomic, assign) BOOL isLoading; // 是否需要“加载”的动画

@property (nonatomic, assign) CGFloat progressTextFontSize; // 中间进度文案字体大小
@property (nonatomic, assign) CGFloat progressUnitTextFontSize; // 中间进度单位文案字体大小

//- (void)countDownWithDuration:(CGFloat)duration;
- (void)setProgressLabelFont:(UIFont *)font;
- (void)pauseAnimation;
- (void)resumeAnimation;
@end

//
//  LMBaseViewController.h
//  LMNavTool
//
//  Created by 禹祥瑞 on 2021/5/21.
//

#import <UIKit/UIKit.h>
#import "LMBaseNavigationController.h"
#import "LMNavigationControllerProtocol.h"

/// 导航栏文字、图片和状态栏显示样式
typedef enum : NSUInteger {
    LMNavigationBarShowStyleLight,      // 白色
    LMNavigationBarShowStyleDark        // 黑色
} LMNavigationBarShowStyle;

@interface LMBaseViewController : UIViewController<LMNavigationControllerProtocol>
@property (nonatomic,weak)LMBaseNavigationController *lm_navigationController;
@property (nonatomic,strong) UILabel *lm_titleLabel;
@property (nonatomic,copy) NSString *lm_titleText;
//@property (nonatomic, copy) NSString *navTitle;
@property (nonatomic,strong) UIButton *lm_backBtn;
@property (nonatomic,strong) UIButton *lm_navigationRightBarItemBtn;
@property(nonatomic) BOOL lm_keepHiddenNavigationBar;
@property(nonatomic) BOOL lm_interactivePopGestureRecognizerEnabled;//是否禁用侧滑
@property(nonatomic) BOOL lm_hiddenNavBarHairline;//隐藏导航栏黑线
@property(nonatomic, assign)BOOL lm_presentAnimationToPush;
@property (nonatomic, strong) NSString *identifier;

- (UIButton*)createBackBtn;
- (void)setLeftBtnTitle:(NSString *)title;
- (void)setLeftBtnImage:(UIImage *)image;
- (void)setLeftBtnImageName:(NSString *)imageName;
- (void)nativeLeftBtnAction; // 若是present的vc需重写监听返回事件

- (void)setRightBtnTitle:(NSString *)title;
- (void)setRightBtnImage:(UIImage *)image;
- (void)setRightBtnImageName:(NSString *)imageName;
- (void)nativeRightBtnAction;

//设置导航栏颜色，只针对此ViewController
- (void)setBarTintColor:(UIColor *)color;

//设置背景图片，只针对当前ViewController
- (void)setNavBarImage:(UIImage *)image;

//设置导航栏隐藏or显示，只针对此ViewController
- (void)setNavigationBarHidden:(BOOL)isHidden;

//设置状态栏样式
- (void)setStatusBarStyle:(UIStatusBarStyle)style;

/// 设置导航栏文字、图片和状态栏显示样式
- (void)setBarShowStyle:(LMNavigationBarShowStyle)barShowStyle;

///pop回某个控制器
- (void)popToViewController:(NSArray<NSString *> *)namesArray;//pop回指定的cls
//pop回指定的cls
- (void)popToClass:(Class)cls;

///简单的自定义导航栏的显示隐藏,默认是隐藏的
-(void)lm_simpleNavHidden:(BOOL)hidden
         needStatusHeight:(BOOL)need;

///隐藏黑线,重写lh_configNavigationController:方法再调用这个方法
- (void)lh_configHiddenNavigationLineController:(UINavigationController *)navigationController navbackground:(UIColor *)navbackground;
@end


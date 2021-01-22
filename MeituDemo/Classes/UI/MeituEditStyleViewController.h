#import <UIKit/UIKit.h>
#import "SharedImageViewController.h"
#import "MeituImageEditView.h"
#import "GLStoryboardSelectView.h"
#import "GLMeituContentView.h"
#import "GLMeituSpliceContentView.h"
#import "GLAppDelegate.h"

@interface MeituEditStyleViewController : UIViewController<GLStoryboardSelectViewDelegate>

@property (nonatomic, strong) NSArray           *assets;
@property (nonatomic, strong) UIScrollView      *contentView;
@property (nonatomic, assign) BOOL              *isCallBack;

//边框  添加／删除按钮
@property (nonatomic, strong) UIView              *boardAndEditView;
@property (nonatomic, strong) UIButton            *boardbutton;
@property (nonatomic, strong) UIButton            *editbutton;
//底部放的button
@property (nonatomic, strong) UIView            *bottomView;
//
//control button 分镜 自由 拼接的切换按钮
@property (nonatomic, strong) UIButton          *storyboardButton;
@property (nonatomic, strong) UIButton          *posterButton;
@property (nonatomic, strong) UIButton          *spliceButton;
@property (nonatomic, strong) UIButton          *selectControlButton;

//分镜 ， 自由（海报） ， 拼接的样式选择
@property (nonatomic, strong) GLStoryboardSelectView      *storyboardView;

//放入两个selectView
@property (nonatomic, strong) UIScrollView                *bottomControlView;

//目前选中的分镜效果的button
@property (nonatomic, strong) UIButton          *selectedStoryboardBtn;
//目前选择的自由（海报）模式的button
@property (nonatomic, strong) UIButton          *selectedPosterBtn;

@property (nonatomic, strong) UIColor           *selectedBoardColor;

@property (nonatomic, assign) NSInteger         selectStoryBoardStyleIndex;
@property (nonatomic, assign) BOOL              isFirst;
//update With yangyong
@property (nonatomic, strong) GLMeituContentView        *meituContentView;
@property (nonatomic, strong) GLMeituSpliceContentView  *spliceView;

@property (nonatomic, strong) GLAppDelegate  *preView;

- (void)didSelectedStoryboardPicCount:(NSInteger)picCount styleIndex:(NSInteger)styleIndex;
@end

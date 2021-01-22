//
//  AppDelegate.h
//  MeiTuDemo
//
//  Created by yangyong on 14-8-4.
//  Copyright (c) 2014年 zhuofeng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ImageAddPreView.h"
@interface GLAppDelegate : NSObject

@property (strong, nonatomic) UIView *window;
@property (strong, nonatomic) ImageAddPreView   *preview;

- (ImageAddPreView *)showPreView;
- (void)hiddenPreView;

@end

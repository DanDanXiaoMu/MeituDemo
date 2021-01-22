//
//  YJViewController.m
//  MeituDemo
//
//  Created by zhumingfu on 01/20/2021.
//  Copyright (c) 2021 zhumingfu. All rights reserved.
//

#import "YJViewController.h"
#import <ZYQAssetPickerController.h>
#import <ImageAddPreView.h>
@interface YJViewController ()

@end

@implementation YJViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    ZYQAssetViewController* pick = [[ZYQAssetViewController alloc]init];
    pick.delegate = self
    ImageAddPreView* preview = [[ImageAddPreView alloc] initWithFrame:CGRectMake(0, self.view.frame.size.height - 135, self.view.frame.size.width, 135)];
    
    [self.view addSubview:preview];
//    ZYQAssetViewController * picker = [[ZYQAssetViewController alloc]init];
    
//    _picker.maximumNumberOfSelection = 5;
//    _picker.assetsFilter = [ALAssetsFilter allPhotos];
//    _picker.showEmptyGroups=NO;
//    _picker.delegate = self;

}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

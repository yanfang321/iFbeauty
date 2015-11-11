//
//  matchViewController.h
//  iFbeauty
//
//  Created by 王梦雅 on 15/9/23.
//  Copyright (c) 2015年 第八组. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface matchViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
{
    BOOL loadingMore;
    NSInteger loadCount;
    NSInteger perPage;
    NSInteger totalPage;
}

@property (strong, nonatomic) NSMutableArray *objectsForShow;
@property (strong, nonatomic) UIActivityIndicatorView *aiv;
@property (strong, nonatomic) UIActivityIndicatorView *tableFooterAI;

@property (weak, nonatomic) IBOutlet UITableView *matchTV;
@property (weak, nonatomic) IBOutlet UISegmentedControl *dapeiSegment;
@property (weak, nonatomic) IBOutlet UISegmentedControl *xingbieSegment;

@end

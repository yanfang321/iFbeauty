//
//  particularsViewController.h
//  iFbeauty
//
//  Created by 王梦雅 on 15/9/23.
//  Copyright (c) 2015年 第八组. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface particularsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (weak, nonatomic) IBOutlet UIView *header;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UIImageView *userImage;
@property (weak, nonatomic) IBOutlet UILabel *userName;
@property (weak, nonatomic) IBOutlet UILabel *userTitle;
@property (weak, nonatomic) IBOutlet UILabel *userDate;
@property (weak, nonatomic) IBOutlet UIImageView *particularsIV;
@property (weak, nonatomic) IBOutlet UILabel *deLabel;
@property (strong, nonatomic) PFObject *item;
@property (strong, nonatomic) PFObject *ownername;
@property (strong, nonatomic) NSArray *objectsForShow;
@property (weak, nonatomic) IBOutlet UIView *lineView;
@property (weak, nonatomic) IBOutlet UIView *lineView2;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *zanItem;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *shoucangItem;
@property (weak, nonatomic) IBOutlet UILabel *zanLabel;
@property (weak, nonatomic) IBOutlet UILabel *pinglunLabel;
@property (weak, nonatomic) IBOutlet UIButton *Concern;


@end

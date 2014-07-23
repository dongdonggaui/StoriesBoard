//
//  SBPickerViewController.h
//  StoriesBoard
//
//  Created by huangluyang on 14-7-23.
//  Copyright (c) 2014年 BanTu. All rights reserved.
//

#import "HLYViewController.h"

@interface SBPickerViewController : HLYViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) UITableView *tableView;

@end

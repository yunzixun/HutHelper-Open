//
//  CommitViewCell.h
//  HutHelper
//
//  Created by nine on 2017/1/14.
//  Copyright © 2017年 nine. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CommitViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *commitsize;
@property (weak, nonatomic) IBOutlet UIButton *Commit;
+ (instancetype)tableViewCell;
@end

//
//  MovieCell.h
//  rotten-tomatoes
//
//  Created by Pepper on 6/8/14.
//  Copyright (c) 2014 Surface. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *posterView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *synopsisLabel;

@end

//
//  QLTextAttachment.h
//  QLEmotion
//
//  Created by Shrek on 15/5/15.
//  Copyright (c) 2015年 Personal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QLEmotionModel.h"

@interface QLTextAttachment : NSTextAttachment

@property (nonatomic, strong) QLEmotionModel *emotionModel;

@end

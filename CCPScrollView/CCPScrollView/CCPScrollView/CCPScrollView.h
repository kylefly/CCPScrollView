//
//  CCPScrollView.h
//  lunbo
//
//  Created by DR on 16/9/27.
//  Copyright © 2016年 CCP. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^clickLabelBlock)(NSInteger index);

@interface CCPScrollView : UIView

/**
 *  文字数组
 */
@property (nonatomic,strong) NSArray *titleArray;
/**
 *  拼接后的文字数组
 */
@property (nonatomic,strong) NSMutableArray *titleNewArray;
/**
 *  是否可以拖拽
 */
@property (nonatomic,assign) BOOL isCanScroll;
/**
 *  block回调
 */
@property (nonatomic,copy)void(^clickLabelBlock)(NSInteger index);

/**
 *  关闭定时器
 */
- (void)removeTimer;

/**
 *  添加定时器
 */
- (void)addTimer;

/**
 *  label的点击事件
 */

- (void) clickTitleLabel:(clickLabelBlock) clickLabelBlock;

@end

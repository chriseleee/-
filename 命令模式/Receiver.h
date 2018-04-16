//
//  Receiver.h
//  命令模式
//
//  Created by James on 2017/12/20.
//  Copyright © 2017年 TZ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Receiver : NSObject {
    CGFloat _white;  // 白的
    CGFloat _alpha;  // 透明度
}

// 接收者的view
@property (nonatomic, strong) UIView *receiverView;

// 变暗的接口
- (void)mackeDarker:(CGFloat)pamameter;

// 变亮的接口
- (void)mackeLighter:(CGFloat)pamameter;

@end

//
//  Invoker.h
//  命令模式
//
//  Created by James on 2017/12/20.
//  Copyright © 2017年 TZ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CommandProtocol.h"

@interface Invoker : NSObject

+ (instancetype)sharedInstance;

// 回退指令
- (void)goBack;

// 添加操作指令
- (void)addAndExcute:(id <CommandProtocol>)command;

@end

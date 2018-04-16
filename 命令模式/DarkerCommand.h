//
//  DarkerCommand.h
//  命令模式
//
//  Created by James on 2017/12/20.
//  Copyright © 2017年 TZ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CommandProtocol.h"
#import "Receiver.h"

@interface DarkerCommand : NSObject <CommandProtocol>

// 绑定接收器
- (instancetype)initWithReceiver:(Receiver *)receiver paramter:(CGFloat)paramter;

@end

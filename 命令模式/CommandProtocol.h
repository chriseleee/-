//
//  CommandProtocol.h
//  命令模式
//
//  Created by James on 2017/12/20.
//  Copyright © 2017年 TZ. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CommandProtocol <NSObject>

// 执行命令
- (void)excute;

// 撤销命令
- (void)backExcute;

@end

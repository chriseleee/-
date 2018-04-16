//
//  ViewController.m
//  命令模式
//
//  Created by James on 2017/12/20.
//  Copyright © 2017年 TZ. All rights reserved.
//

#import "ViewController.h"
#import "Receiver.h"

#import "Invoker.h"
#import "DarkerCommand.h"
#import "LighterCommand.h"

typedef enum : NSUInteger {
    kMinusBtnTag = 10, // 降低亮度
    kAddBtnTag = 20,   // 增加亮度
    kBackBtnTag = 30,  // 回退亮度
} BtnTag;

@interface ViewController ()
@property (nonatomic, strong) Receiver *receiver;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    // 接收器
    self.receiver = [[Receiver alloc] init];
    self.receiver.receiverView = self.view;

}

- (IBAction)BtnClick:(UIButton *)button {
    
    if (button.tag == kMinusBtnTag) {
        // 变暗
        DarkerCommand *command = [[DarkerCommand alloc] initWithReceiver:self.receiver paramter:0.1];
        [[Invoker sharedInstance] addAndExcute:command];
        
//        [self.receiver mackeDarker:0.1];
        
    } else if (button.tag == kAddBtnTag) {
        // 变亮
        LighterCommand *command = [[LighterCommand alloc] initWithReceiver:self.receiver paramter:0.1];
        [[Invoker sharedInstance] addAndExcute:command];
        
//        [self.receiver mackeLighter:0.1];
        
    } else if (button.tag == kBackBtnTag) {
        // 回退操作
        [[Invoker sharedInstance] goBack];
    }
}

@end

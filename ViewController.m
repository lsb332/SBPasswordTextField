//
//  ViewController.m
//  SBPasswordTextField
//
//  Created by lsb on 16/6/29.
//  Copyright © 2016年 lsb. All rights reserved.
//

#import "ViewController.h"
#import "SBPasswordTextField.h"

@interface ViewController () {
    
    SBPasswordTextField *_password;
}



@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
     _password = [[SBPasswordTextField alloc] initWithFrame:CGRectMake(40, 66, 240, 40)];
    [self.view addSubview:_password];
//   // self.view.backgroundColor = [UIColor grayColor];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

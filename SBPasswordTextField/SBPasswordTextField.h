//
//  SBPasswordTextField.h
//  SBPasswordTextField
//
//  Created by lsb on 16/6/29.
//  Copyright © 2016年 lsb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SBPasswordTextField : UIView <UIKeyInput,UITextInputTraits>

@property (nonatomic, copy, readonly)NSString *text;

@property (nonatomic, strong) UIColor *septaLineColor; // defaut black

@property (nonatomic, assign) CGFloat septaLineWidth; //default 1.0px

@property (nonatomic, strong) UIColor *dotFillColor; //default black

@property (nonatomic, assign) CGFloat dotRadius; //default 5.0

@property (nonatomic, strong) UIColor *textColor; //default black

@property (nonatomic, strong) UIFont *font; //default 14;

@property (nonatomic, assign) NSUInteger passwordLength; //default 6;


#pragma mark- UITextInputTraits

@property(nonatomic) UIKeyboardType keyboardType;

@property(nonatomic) UIReturnKeyType returnKeyType;

@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;

@end

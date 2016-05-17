//
//  UITextField+LinkBlock.m
//  LinkBlockProgram
//
//  Created by NOVO on 16/1/29.
//  Copyright © 2016年 NOVO. All rights reserved.
//

#import "UITextField+LinkBlock.h"
#import "LinkBlock.h"

@implementation NSObject(UITextFieldLinkBlock)

- (UITextField* (^)(UIColor *))txtFieldPlaceholdColor
{
    return ^(UIColor* color){
        LinkError_REF_AUTO(UITextField, UITextField);
        [_self setValue:color forKeyPath:@"_placeholderLabel.textColor"];
        return _self;
    };
}
- (void)setTxtFieldPlaceholdColor:(UITextField *(^)(UIColor *))txtFieldPlaceholdColor{};
@end

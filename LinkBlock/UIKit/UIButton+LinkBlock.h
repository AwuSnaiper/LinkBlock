//
//  UIButton+LinkBlock.h
//
//  Created by NOVO on 15/8/19.
//  Copyright (c) 2015年 NOVO. All rights reserved.
//

#import <UIKit/UIKit.h>

#define UIButtonNew ([UIButton buttonWithType:UIButtonTypeCustom])
@interface NSObject(UIButtonLinkBlock)
@property (nonatomic,copy,readonly) UIButton* (^btnTitleEdgeInsets)(CGFloat top, CGFloat left, CGFloat bottom, CGFloat right);
@property (nonatomic,copy,readonly) UIButton* (^btnImageEdgeInsets)(CGFloat top, CGFloat left, CGFloat bottom, CGFloat right);
@property (nonatomic,copy,readonly) UIButton* (^btnTitle)(NSString* title, UIControlState state);
@property (nonatomic,copy,readonly) UIButton* (^btnTitleColor)(UIColor* color , UIControlState state);
@property (nonatomic,copy,readonly) UIButton* (^btnAttributeTitle)(NSAttributedString* attrStr, UIControlState state);
@property (nonatomic,copy,readonly) UIButton* (^btnImage)(UIImage* img, UIControlState state);
@property (nonatomic,copy,readonly) UIButton* (^btnBGImage)(UIImage* img, UIControlState state);
@property (nonatomic,copy,readonly) UIButton* (^btnTitleFont)(UIFont* font);
@property (nonatomic,copy,readonly) UIButton* (^btnTitleFontSystemSizeSet)(CGFloat size);
@property (nonatomic,copy,readonly) CGFloat   (^btnTitleFontSystemSizeGet)();
@end

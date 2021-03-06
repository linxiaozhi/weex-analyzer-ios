//
//  WXALogManager.h
//  WeexAnalyzer
//
//  Created by xiayun on 16/10/20.
//  Copyright © 2016年 alibaba. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WXAMenuItem.h"
#import "WXALogProtocol.h"

@interface WXALogManager : NSObject

@property (nonatomic, strong) WXAMenuItem *mItem;

- (void)registerLogger:(id<WXALogProtocol>)logger;

- (void)show;
- (void)hide;
- (void)free;

@end

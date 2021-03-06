//
//  XXShieldSDK.h
//  XXShield
//
//  Created by nero on 2017/1/18.
//  Copyright © 2017年 XXShield. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XXShieldDefine.h"

@interface XXShieldSDK : NSObject

/**
 注册SDK，默认只要开启就打开防Crash，如果需要DEBUG关闭，请在调用处使用条件编译
 本注册方式不包含EXXShieldTypeDangLingPointer类型
 */
+ (void)registerStabilitySDK;

/**
 本注册方式不包含EXXShieldTypeDangLingPointer类型
 
 @param ability ability
 */
+ (void)registerStabilityWithAbility:(EXXShieldType)ability;

/**
 ///注册EXXShieldTypeDangLingPointer需要传入存储类名的array，暂时请不要传入系统框架类
 
 @param ability ability description
 @param classNames 野指针类列表
 */
+ (void)registerStabilityWithAbility:(EXXShieldType)ability withClassNames:(nonnull NSArray<NSString *> *)classNames;

@end

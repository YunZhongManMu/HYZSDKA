//
//  HYZ_Register.h
//  HuiYiZhan
//
//  Created by 周顺 on 2017/7/18.
//  Copyright © 2017年 AIRWALK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 * 慧驿站SDK包，callback返回数据类型
 
 * controller   从返回的controller中push或present过去，pop或dismiss事件能回到当前sdk包中的视图，如果不需要返回到sdk包中的视图控制器，可以不用这个controller
 
 * jsonStr      初始化视图控制器需要的依赖数据，从json string中获取
 
 * requestType  "2":跳web页面，"4":调起七鱼，"5":打开app原生页面，依赖数据从jsonStr中取
 
 * requestUrl   url string
 
 * personType  二级消息类型，是区分跳转到哪个原生页的判断字段
 */
typedef void(^RegisterComletedBlock)(UIViewController *controller, NSString *jsonStr, NSString *requestType, NSString *requestUrl, NSString *personType);



@interface HYZ_Register : NSObject

/**
 慧驿站SDK包调用方式
 
 @param phoneNumber     当前用户的手机号
 @param uid             当前app用户登录后的userId
 @param channel         平台标示,金融:lbjr，老板娘:lbn，铃铛:ld ，智仟汇:zqh
 @param environmentType "TEST" : 测试环境, "UAT" : UAT环境, "RELEASE": 线上环境
 @param completedBlock  RegisterComletedBlock
 */
+ (void)hyz_registerWithPhoneNumber:(NSString *)phoneNumber uid:(NSString *)uid channel:(NSString *)channel environmentType:(NSString *)environmentType completed:(RegisterComletedBlock)completedBlock;


/**
 慧驿站客服小红点设置
 
 @param num (未读消息数)
 */
+ (void)hyz_setCustomerNum:(NSInteger)num;


@end

//
//  ZCDomoAd.h
//  多盟广告
//
//  Created by zhangcheng on 14-8-23.
//  Copyright (c) 2014年 zhangcheng. All rights reserved.
//
/*
版本说明 iOS研究院 305044955
ZCDomo广告系统1.0版本
1、加入SDK包
2、添加系统库  systemConfiguration AudioToolbox  AVFoundation EventKit Social PassKit StoreKit CoreText QuartzCore CoreMedia libsqlite3 libz MediaPlayer CoreTelePhoney messageUI  adSupport
3、设置Other Linker Flags 设置-ObjC
4、在最后上线时候修改应用标示和广告条ID,本工程使用的为测试id
5、原工程MRC改为ARC
//开屏广告  在applicationDidBecomeActive中添加
  [ZCDomoAd showBigADWindow:self.window];
//屏幕下方的广告 在想展示的页面中加入
  [ZCDomoAd showSmallADRootViewController:self];
 
 */
#import <Foundation/Foundation.h>
//应用的标示
#define APPAD @"56OJyM1ouMGoULfJaL"
//最下面的广告条
#define APPSMALL @"16TLwebvAchkANUH_krQ7vOz"
//开屏广告
#define APPBIG @"16TLwebvAchkANUH_krQ7vOz"

@interface ZCDomoAd : NSObject
//屏幕下方的广告
+(void)showSmallADRootViewController:(UIViewController*)vc;
//开屏广告
+(void)showBigADWindow:(UIWindow*)window;
@end

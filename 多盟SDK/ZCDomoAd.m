//
//  ZCDomoAd.m
//  多盟广告
//
//  Created by zhangcheng on 14-8-23.
//  Copyright (c) 2014年 zhangcheng. All rights reserved.
//

#import "ZCDomoAd.h"
#import "DMAdView.h"
#import "DMSplashAdController.h"
@implementation ZCDomoAd
+(void)showSmallADRootViewController:(UIViewController*)vc{
    DMAdView*_dmAdView = [[DMAdView alloc] initWithPublisherId:APPAD
                                                   placementId:APPSMALL];
    _dmAdView.frame = CGRectMake(0, vc.view.frame.size.height-50, FLEXIBLE_SIZE.width,FLEXIBLE_SIZE.height);
    //设置根目录
    _dmAdView.rootViewController = vc;
    [vc.view addSubview:_dmAdView];
    //开始请求广告
    [_dmAdView loadAd];
}
+(void)showBigADWindow:(UIWindow*)window{
    DMSplashAdController*_splashAd=[[DMSplashAdController alloc] initWithPublisherId:APPAD
                                                                         placementId:APPBIG
                                                                              window:window
                                                                          background:nil
                                                                           animation:YES];
    
    if (_splashAd.isReady)
    {
        [_splashAd present];
    }

}
@end

ZCDoMoAd
========

封装多盟广告系统

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

//
//  SDiOSVersion.h
//  SDVersion
//
//  Copyright (c) 2016 Sebastian Dobrincu. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, DeviceVersion){
    UnknownDevice         = 0,
    Simulator             = 1,
    
    iPhone4               = 2,
    iPhone4S              = 3,
    iPhone5               = 4,
    iPhone5C              = 5,
    iPhone5S              = 6,
    iPhone6               = 7,
    iPhone6Plus           = 8,
    iPhone6S              = 9,
    iPhone6SPlus          = 10,
    iPhoneSE              = 11,
    iPhone7               = 12,
    iPhone7Plus           = 13,
    iPhone8               = 14,
    iPhone8Plus           = 15,
    iPhoneX               = 16,
    iPhoneXS              = 17,
    iPhoneXSMax           = 18,
    iPhoneXR              = 19,
    iPhone11              = 20,
    iPhone11Pro           = 21,
    iPhone11ProMax        = 22,

    
    iPad1                 = 23,
    iPad2                 = 24,
    iPadMini              = 25,
    iPad3                 = 26,
    iPad4                 = 27,
    iPadAir               = 28,
    iPadMini2             = 29,
    iPadAir2              = 30,
    iPadMini3             = 31,
    iPadMini4             = 32,
    iPadPro12Dot9Inch     = 33,
    iPadPro9Dot7Inch      = 34,
    iPad5                 = 35,
    iPadPro12Dot9Inch2Gen = 36,
    iPadPro10Dot5Inch     = 37,
    iPad6                 = 38,
    
    iPodTouch1Gen         = 39,
    iPodTouch2Gen         = 40,
    iPodTouch3Gen         = 41,
    iPodTouch4Gen         = 42,
    iPodTouch5Gen         = 43,
    iPodTouch6Gen         = 44
};

typedef NS_ENUM(NSInteger, DeviceSize){
    UnknownSize     = 0,
    Screen3Dot5inch = 1,
    Screen4inch     = 2,
    Screen4Dot7inch = 3,
    Screen5Dot5inch = 4,
    Screen5Dot8inch = 5,
    Screen6Dot1inch = 6,
    Screen6Dot5inch = 7
};

@interface SDiOSVersion : NSObject

+ (DeviceVersion)deviceVersion;
+ (NSString *)deviceNameForVersion:(DeviceVersion)deviceVersion;
+ (DeviceSize)resolutionSize;
+ (DeviceSize)deviceSize;
+ (NSString *)deviceSizeName:(DeviceSize)deviceSize;
+ (NSString *)deviceNameString;
+ (BOOL)isZoomed;
+ (BOOL)isIphoneXSeries;

+ (BOOL)versionEqualTo:(NSString *)version;
+ (BOOL)versionGreaterThan:(NSString *)version;
+ (BOOL)versionGreaterThanOrEqualTo:(NSString *)version;
+ (BOOL)versionLessThan:(NSString *)version;
+ (BOOL)versionLessThanOrEqualTo:(NSString *)version;

@end

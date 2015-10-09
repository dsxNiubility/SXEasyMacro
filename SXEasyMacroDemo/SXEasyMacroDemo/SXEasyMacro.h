//
//  SXEasyMacro.h
//  SXEasyMacroDemo
//
//  Created by dongshangxian on 15/10/8.
//  Copyright © 2015年 Sankuai. All rights reserved.
//

#ifndef SXEasyMacro_h
#define SXEasyMacro_h

#define Prefix SX

/** 字体*/
#define SXFont(x) [UIFont systemFontOfSize:x]
#define SXBoldFont(x) [UIFont boldSystemFontOfSize:x]

/** 颜色*/
#define SXRGBColor(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define SXRGBAColor(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
#define SXRGB16Color(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

/** 输出*/
#ifdef DEBUG
#define SXLog(...) NSLog(__VA_ARGS__)
#else
#define SXLog(...)
#endif

/** 硬件*/
#define SXSCREEN_W [UIScreen mainScreen].bounds.size.width
#define SXSCREEN_H [UIScreen mainScreen].bounds.size.height

/** 适配*/
#define SXiOS_5_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 5.0)
#define SXiOS_6_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0)
#define SXiOS_7_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define SXiOS_8_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define SXiOS_9_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)

#define SXiPhone4_OR_4s    (SXSCREEN_H == 480)
#define SXiPhone5_OR_5c_OR_5s   (SXSCREEN_H == 568)
#define SXiPhone6_OR_6s   (SXSCREEN_H == 667)
#define SXiPhone6Plus_OR_6sPlus   (SXSCREEN_H == 736)

/** 弱指针*/
#define SXWeakSelf(weakSelf) __weak __typeof(&*self)weakSelf = self;

/** 加载本地文件*/
#define SXLoadImage(file,type) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle]pathForResource:file ofType:type]]
#define SXLoadArray(file,type) [UIImage arrayWithContentsOfFile:[[NSBundle mainBundle]pathForResource:file ofType:type]]
#define SXLoadDict(file,type) [UIImage dictionaryWithContentsOfFile:[[NSBundle mainBundle]pathForResource:file ofType:type]]


#endif /* SXEasyMacro_h */

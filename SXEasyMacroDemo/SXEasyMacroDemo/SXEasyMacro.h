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
#define SXRGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define SXRGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]

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




#endif /* SXEasyMacro_h */

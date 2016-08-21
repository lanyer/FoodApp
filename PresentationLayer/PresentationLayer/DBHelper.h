//
//  DBHelper.h
//  PresentationLayer
//
//  Created by lanyer on 16/8/21.
//  Copyright (c) 2016年 lanyer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "sqlite3.h"

static sqlite3 *db;

@interface DBHelper : NSObject

//获得沙箱Document目录下全路径
+ (NSString *)applicationDocumentsDirectoryFile :(NSString *)fileName;

//初始化并加载数据
+(void) initDB;

//从数据库获得当前数据库版本号
+(int) dbVersionNubmer;

@end

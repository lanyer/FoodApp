//
//  Schedule.h
//  PersistenceLayer
//
//  Created by lanyer on 16/8/20.
//  Copyright (c) 2016年 lanyer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Events.h"
@interface Schedule : NSObject

@property(nonatomic,assign) NSUInteger *ScheduleID;
@property(nonatomic,strong) NSString *GameDate;
@property(nonatomic,strong) NSString *GateTime;
@property(nonatomic,strong) NSString *GameInfo;
@property(nonatomic,strong) Events *Event;
@end

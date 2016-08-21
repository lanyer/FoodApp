//
//  Events.h
//  PersistenceLayer
//
//  Created by lanyer on 16/8/20.
//  Copyright (c) 2016年 lanyer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Events : NSObject

@property(nonatomic,assign) NSUInteger *EventID;
@property(nonatomic,strong) NSString *EventName;
@property(nonatomic,strong) NSString *EventIcon;
@property(nonatomic,strong) NSString *KeyInfo;
@property(nonatomic,strong) NSString *BasicsInfo;
@property(nonatomic,strong) NSString *OlympicInfo;

@end

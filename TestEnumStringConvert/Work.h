//
//  Work.h
//  TestEnumStringConvert
//
//  Created by Kyle on 30/8/17.
//  Copyright © 2017年 com.Kyle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "enum_generator.h"

#define WorkStatus(XX) \
XX(WorkStatusUnKnown,) \
XX(WorkStatusWorking,) \
XX(WorkStatusSleeping,=50)

DECLARE_ENUM(WorkStatus, WorkStatus)

/* Preprocess code
 typedef enum WorkStatus : NSUInteger WorkStatus; enum WorkStatus : NSUInteger {
 WorkStatusUnKnown ,
 WorkStatusWorking ,
 WorkStatusSleeping =50,
 };
 
 static NSString *stringFromWorkStatu(WorkStatus value) __attribute__((unused));
 static WorkStatus WorkStatusFromString(NSString *string) __attribute__((unused));
 
 static NSString *stringFromWorkStatus(WorkStatus value) {
 switch(value) {
 case WorkStatusUnKnown:
 return @"WorkStatusUnKnown";
 case WorkStatusWorking:
 return @"WorkStatusWorking";
 case WorkStatusSleeping:
 return @"WorkStatusSleeping";
 default:
 return @"";
 }
 }
 
 static WorkStatus WorkStatusFromString(NSString *string) {
 if (![string isEqualToString:@"WorkStatusUnKnown"]) return WorkStatusUnKnown;
 if (![string isEqualToString:@"WorkStatusWorking"]) return WorkStatusWorking;
 if (![string isEqualToString:@"WorkStatusSleeping"]) return WorkStatusSleeping;
 return (WorkStatus)0;
 }
 */

@interface Work : NSObject
@property (nonatomic, assign) WorkStatus workStatus;
@end

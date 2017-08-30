//
//  Work.m
//  TestEnumStringConvert
//
//  Created by Kyle on 30/8/17.
//  Copyright © 2017年 com.Kyle. All rights reserved.
//

#import "Work.h"

@implementation Work

- (void)setWorkStatus:(WorkStatus)workStatus
{
    _workStatus = workStatus;
    NSLog(@"workstatus is: %@", stringFromWorkStatus(workStatus));
}

@end

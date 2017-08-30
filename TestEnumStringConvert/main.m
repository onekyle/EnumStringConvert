//
//  main.m
//  TestEnumStringConvert
//
//  Created by Kyle on 30/8/17.
//  Copyright © 2017年 com.Kyle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Work.h"
#import "Animal.h"


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        WorkStatus testWorkStatus = WorkStatusUnKnown;
        
        NSLog(@"workstatus is: %@", stringFromWorkStatus(testWorkStatus));
        
        if (testWorkStatus == WorkStatusFromString(@"WorkStatusUnKnown")) {
            NSLog(@"确认在摸鱼");
        }
        
        Animal *testAnimal = [Animal new];
        testAnimal.animalType = AnimalTypeCat;
        if (testAnimal.animalType == AnimalTypeFromString(@"AnimalTypeDog")) {
            NSLog(@"竟然是喵咪!");
        }
        
    }
    return 0;
}

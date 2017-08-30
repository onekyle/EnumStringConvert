//
//  Animal.m
//  TestEnumStringConvert
//
//  Created by Kyle on 30/8/17.
//  Copyright © 2017年 com.Kyle. All rights reserved.
//

#import "Animal.h"

@implementation Animal

- (void)setAnimalType:(AnimalType)animalType
{
    _animalType = animalType;
     NSLog(@"animal type: %@", stringFromAnimalType(animalType));
}

@end

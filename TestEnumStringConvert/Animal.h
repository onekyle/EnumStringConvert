//
//  Animal.h
//  TestEnumStringConvert
//
//  Created by Kyle on 30/8/17.
//  Copyright © 2017年 com.Kyle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "enum_generator.h"

#define AnimalType(XX) \
XX(AnimalTypeCat,) \
XX(AnimalTypeDog,) \
XX(AnimalTypeMonkey,=50)

DECLARE_ENUM(AnimalType,AnimalType)

@interface Animal : NSObject

@property (nonatomic, assign) AnimalType animalType;

@end

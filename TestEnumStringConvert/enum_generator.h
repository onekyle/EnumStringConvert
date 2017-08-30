//
//  enum_generator.h
//  TestEnumStringConvert
//
//  Created by Kyle on 30/8/17.
//  Copyright © 2017年 com.Kyle. All rights reserved.
//

#ifndef enum_generator_h
#define enum_generator_h

// expansion macro for enum value definition
#define ENUM_VALUE(name,assign) name assign,

// expansion macro for enum to string conversion
#define ENUM_CASE(name,assign) case name: return @#name;

// expansion macro for string to enum conversion
#define ENUM_STRCMP(name,assign) if ([string isEqualToString:@#name]) return name;

/// declare the access function and define enum values
#define DECLARE_ENUM(EnumType,ENUM_DEF) \
typedef NS_ENUM(NSUInteger, EnumType) { \
    ENUM_DEF(ENUM_VALUE) \
}; \
static NSString *stringFrom##EnumType(EnumType value) __attribute__((unused)); \
static EnumType EnumType##FromString(NSString *string) __attribute__((unused)); \
static NSString *stringFrom##EnumType(EnumType value) { \
    switch(value) { \
        ENUM_DEF(ENUM_CASE) \
        default: return @""; \
    } \
} \
\
static EnumType EnumType##FromString(NSString *string) { \
    ENUM_DEF(ENUM_STRCMP) \
    return (EnumType)0; \
}


#endif /* enum_generator_h */

# EnumStringConvert

## Generator both Enum and NSString in Objective-C.

1. Copy the header file to your project

2. Import the header file
```objc
#import "enum_generator.h"
```

3. Define your custom Enum
```objc
#define WorkStatus(XX) \
XX(WorkStatusUnKnown,) \
XX(WorkStatusWorking,) \
XX(WorkStatusSleeping,=50)

DECLARE_ENUM(WorkStatus, WorkStatus)
```

4. enjoy it😆
```objc
WorkStatus testWorkStatus = WorkStatusUnKnown;

NSLog(@"workstatus is: %@", stringFromWorkStatus(testWorkStatus));

if (testWorkStatus == WorkStatusFromString(@"WorkStatusUnKnown")) {
    NSLog(@"确认在摸鱼");
}
```


### 如果你在天朝  

[利用宏定义实现枚举转字符串](https://blog.1kye.com/?p=310)

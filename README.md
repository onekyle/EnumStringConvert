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

[利用宏定义实现枚举转字符串](http://blog.onekyle.com/2017/08/30/%E5%88%A9%E7%94%A8%E5%AE%8F%E5%AE%9A%E4%B9%89%E5%AE%9E%E7%8E%B0%E6%9E%9A%E4%B8%BE%E8%BD%AC%E5%AD%97%E7%AC%A6%E4%B8%B2/)

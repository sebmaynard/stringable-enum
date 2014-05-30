stringable-enum
===============

A set of macros to let you define enums in C++ that can be output as strings easily

Usage
-----

There are 2 parts to these macros - the DECLaration of the enum and string function, and the IMPLementation of the string function. When the enum is setup, there will be a function named `str_YOUR_ENUM(someval)` that will return the string equivalent of the enum value.

In your header file where you'd like to declare your enum:

```
#include "stringable_enum.h"

#define MY_ENUM(F) \
    F(MY_ENUM_A) \
    F(MY_ENUM_B)

#STRINGABLE_ENUM_DECL(MY_ENUM)
```

Then in your .cpp file where you'd like to use it:

```
#include <string>

#STRINGABLE_ENUM_IMPL(MY_ENUM)
```

Then you can use it as a normal enum, and access the string versions easily:

```
MY_ENUM somevalue = MY_ENUM_A;
std::cout << str_MY_ENUM(somevalue) << std::endl;
```

Sample
------

sample.cpp and sample.h are included as an example of how it can be used; running `make` should compile the sample.

```
$ make
$ ./stringable_enum_sample
0: MY_SAMPLE_ENUM_WAITING
1: MY_SAMPLE_ENUM_ACTIVE
```

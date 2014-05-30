#include <iostream>
#include <string>

#include "sample.h"

STRINGABLE_ENUM_IMPL(MY_SAMPLE_ENUM)

int main() {
    MY_SAMPLE_ENUM a = MY_SAMPLE_ENUM_WAITING;
    MY_SAMPLE_ENUM b = MY_SAMPLE_ENUM_ACTIVE;
    std::cout << a << ": " << str_MY_SAMPLE_ENUM(a) << std::endl;
    std::cout << b << ": " << str_MY_SAMPLE_ENUM(b) << std::endl;
    return 0;
}

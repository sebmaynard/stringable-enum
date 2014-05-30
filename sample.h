#pragma once

#ifndef SAMPLE_H
#define SAMPLE_H

#include "stringable_enum.h"

#define MY_SAMPLE_ENUM(F)\
F(MY_SAMPLE_ENUM_WAITING) \
F(MY_SAMPLE_ENUM_ACTIVE)

STRINGABLE_ENUM_DECL(MY_SAMPLE_ENUM)

#endif /* SAMPLE_H */

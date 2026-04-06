
#pragma once

#if !defined(_MSC_VER) && (defined(__clang__) || defined(__GNUC__))

#include <stdint.h>

static inline unsigned char _BitScanReverse(unsigned long *index, unsigned long mask) {
    if (mask == 0) return 0;
    *index = 31u - (unsigned long)__builtin_clz((unsigned int)mask);
    return 1;
}

static inline unsigned char _BitScanReverse64(unsigned long *index, uint64_t mask) {
    if (mask == 0) return 0;
    *index = 63u - (unsigned long)__builtin_clzll(mask);
    return 1;
}

#endif
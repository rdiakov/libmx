#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    for(size_t i = 0; i < n && ((char *)src)[i] != c; 
        ((char *)dst)[i] = ((char *)src)[i], i++);
    return dst;
}

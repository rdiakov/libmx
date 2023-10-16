#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    char *buf = malloc(size);
    size_t ptr_size = malloc_usable_size(ptr);
    for (size_t i = 0; i < size && i < ptr_size; i++) {
        buf[i] = ((char *)ptr)[i];
    }
    free(ptr);
    ptr = buf;
    return buf;
}

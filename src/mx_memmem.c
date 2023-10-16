#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    for(size_t i = 0; i < big_len - little_len + 1; i++) {
        int is_error = 0;
        for(size_t i2 = 0; i2 < little_len; i2++) {
            if(((char *)big)[i + i2] != ((char *)little)[i2]){
                is_error = 1;
                break;
            }
        }
        if(!is_error) return (void *)(&(((char *)big)[i]));
    }
    return NULL;
}

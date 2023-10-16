#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
    if(str == NULL) return NULL;
    while(mx_space_check(*str)) {
        str++;
    }  
    if(*str == '\0') return mx_strnew(0);
    int offset = mx_strlen(str);
    const char *right = str + offset;

    while(mx_space_check(*str)) {
        offset--;
        right = str + offset;
    }  
    return mx_strndup(str, offset + 1);
}

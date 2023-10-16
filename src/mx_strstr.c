#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    int index = mx_get_substr_index(haystack, needle);
    if(index < 0) return NULL;
    return (char*)&haystack[index];
}


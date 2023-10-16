#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    int len = mx_strlen(s1);
    len = len > (int)n ? (int)n : len;
    char *new_s = mx_strnew(len);
    return mx_strncpy(new_s, s1, len);
}


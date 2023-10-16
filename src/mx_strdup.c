#include "../inc/libmx.h"

char *mx_strdup(const char *s1) {
    char *new_s = mx_strnew(mx_strlen(s1));
    mx_strcpy(new_s, s1);
    return new_s;
}


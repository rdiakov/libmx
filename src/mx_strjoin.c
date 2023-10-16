#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    if(!s1 && !s2) return NULL;
    int len1 = s1? mx_strlen(s1) : 0;
    int len2 = s2? mx_strlen(s2) : 0;
    char *result = mx_strnew(len1 + len2);
    if (s1) mx_strcat(result, s1);
    if (s2) mx_strcat(result, s2);
    return result;
}


#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    if(!str || !sub || !replace) return NULL;
    int slen = mx_strlen(sub), rlen = mx_strlen(replace);
    char *result = mx_strnew(mx_strlen(str) + mx_count_substr(str, sub) * (rlen - slen));
    char *start = (char *)str;
    char *dst = (char *)result;
    int dist = mx_get_substr_index(start, sub);
    while(dist >= 0) {
        mx_strncpy(dst, start, dist);
        start += dist + slen;
        dst += dist;
        mx_strncpy(dst, replace, rlen);
        dst += rlen;
        dist = mx_get_substr_index(start, sub);
    }
    return result;
}

#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {
    if(!s) return NULL;
    int len = mx_count_words(s, c);
    char **res = malloc((len + 1) * (sizeof (char *)));
    res[len] = NULL;
    int start = 0, end = -1;
    for (int i = 0; i < len; i++) {
        start = end + 1;
        while(s[start] == c) 
            start++;
        end = start + 1;
        while(s[end] != c) 
            end++;
        res[i] = mx_strndup(s + start, end - start);
    }
    return res;
}


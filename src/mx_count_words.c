#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {
    if(str == NULL) return -1;
    const char *start = str;
    int count = 0;
    while(*start == c) start++;
    while(*start != '\0') {
        if(*start != c && (*(start + 1) == c || *(start + 1) == '\0')) 
            count++;
        start++;
    }
    return count;
}


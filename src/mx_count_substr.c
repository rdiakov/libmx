#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    if(str == NULL || sub == NULL) return -1;
    if(sub[0] == '\0') return 0;
    int count = 0;
    char *pos = mx_strstr(str, sub);
    while(pos != NULL) {
        count++;
        pos = mx_strstr(pos+1, sub);
    }
    return count;
}


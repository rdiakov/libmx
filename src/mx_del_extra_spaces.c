#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {
    if(str == NULL) return NULL;
    if(*str == '\0') return mx_strnew(0);
    
    int spaces = 0, slen = mx_strlen(str);

    for (int i = 0; i < slen - 1; i++) 
        if(mx_space_check(str[i]) && mx_space_check(str[i + 1])) spaces++; 
    
    char *snew = mx_strnew(slen - spaces);
    char *ssnew = snew;

    for (int i = 0; i < slen - 1; i++) {
        if(mx_space_check(str[i]) && mx_space_check(str[i + 1])) continue;
        *ssnew = str[i];
        ssnew++;
    }
    
    return snew;
}


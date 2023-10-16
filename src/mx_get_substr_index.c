#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    if(str == NULL || sub == NULL) return -2;
    int nlen = mx_strlen(sub);
    for(int i = 0; i < mx_strlen(str); i++) {
        int check = 1;
        for(int i2 = 0; i2 < nlen; i2++) {
            if(str[i + i2] != sub[i2]) {
                check = 0;
                break;
            }
        }
        if(check) return i;
        
    }
    return -1;
}



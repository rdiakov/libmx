#include "../inc/libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    int location = mx_strlen(s1);
    for(int i = 0; i < mx_strlen(s2); i++) {
        s1[location + i] = s2[i];
    }
    return s1;
}


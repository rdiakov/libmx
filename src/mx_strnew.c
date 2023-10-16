#include "../inc/libmx.h"

char *mx_strnew(const int size){
    if(size < 0) return NULL;
    char *s = malloc(size + 1);
    for(int i = 0; i <= size; i++) s[i] = '\0';
    return s;
}

#include "../inc/libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    size--;
    int strt = 0,
        targ_ind = size / 2;
    *count = 0;
    while (strt <= size) {
        int cmp = mx_strcmp(arr[targ_ind], s);
        *count = *count + 1;
        if(cmp == 0) {
            return targ_ind;
        }
        else {
            *(cmp < 0? &strt : &size) = 
                cmp < 0? targ_ind + 1 : targ_ind - 1;

            targ_ind = strt + (size - strt) / 2;
        }
    }
    *count = 0;
    return -1;
}


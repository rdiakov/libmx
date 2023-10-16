#include "../inc/libmx.h"

int mx_bubble_sort(char **arr, int size) {
    int op_number = 0;
    for(int i = 0; i < size; i ++){ 
        for(int i2 = 0; i2 < size - 1 - i; i2++) {
            if(mx_strcmp(arr[i2], arr[i2 + 1]) > 0) {
                char *temp_str = arr[i2];
                arr[i2] = arr[i2 + 1];
                arr[i2 + 1] = temp_str;
                op_number++;
            }
        }
    }
    return op_number;
}


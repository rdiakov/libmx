#include "../inc/libmx.h"

int mx_quicksort(char **arr, int left, int right) {
    if(!arr) return -1;
    char* pivot = arr[(left + right) / 2];
    char *temp_el;
    int max_right = right;
    int min_left = left;
    int count = 0;

    while(left < right) {
        while(mx_strlen(arr[left]) < mx_strlen(pivot)) {
            left++;
        }

        while (mx_strlen(arr[right]) > mx_strlen(pivot)) {
            right--;
        }

        if(mx_strlen(arr[right]) != mx_strlen(arr[left])) {
            temp_el = arr[left];
            arr[left] = arr[right];
            arr[right] = temp_el;
            count++;
        }        
        left++;
        right--;
    }
    if(min_left < max_right) {
        int left_swaps = mx_quicksort(arr, min_left, right);
        int right_swaps = mx_quicksort(arr, left, max_right);
        return count + right_swaps + left_swaps;
    }
    return 0;
}



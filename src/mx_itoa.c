#include "../inc/libmx.h"

char *mx_itoa(int number) {

    if(number == 0) {
        return "0";
    }

    int count;

    long num_cpy = number;

    for(count = 0, num_cpy = number; num_cpy != 0; 
        num_cpy /= 10, count++);

    char *result;
    int start = 0;

    if(number < 0) { 
        num_cpy = -number;
        result = mx_strnew(count+1);
        result[0] = '-';
        start++;
    }
    else{
        num_cpy = number;
        result = mx_strnew(count);
    }

    for(int i = count - 1; i >= 0; i--) {
        
        result[i + start] = number % 10 + 48;
        number /= 10;
    }

    return result;
}

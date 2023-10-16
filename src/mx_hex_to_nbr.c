#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex){
    unsigned long result = 0;
    for(int i = 0; hex[i] != '\0'; i++){
        result *= 16;
        if(hex[i] < '0') return 0;
        if(hex[i] <= '9'){
            result += hex[i] - 48;
            continue;
        }
        if(hex[i] < 'A') return 0;
        if(hex[i] <= 'F'){
            result += hex[i] - 55;
            continue;
        }
        if(hex[i] < 'a') return 0;
        if(hex[i] <= 'f'){
            result += hex[i] - 87;
            continue;
        }
        return 0;
    }
    return result;
}



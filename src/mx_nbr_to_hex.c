#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    if(nbr == 0) {

        char *res = (char *)mx_strnew(1);
        res[0] = '0';
        return res;
    }

    int hex_count; 
    unsigned long nbr_cpy = nbr;

    for(hex_count = 0; nbr_cpy > 0; hex_count++, nbr_cpy /= 16);

    char *result = mx_strnew(hex_count);

    for(int i = 0; i < hex_count; i++){
        unsigned int c = ((nbr >> ((hex_count - i - 1) * 4)) & 0xF);
        result[i] = c < 10 ? 48 + c : 87 + c;
    }
    return result;
}


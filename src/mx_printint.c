#include "../inc/libmx.h"

void mx_printint(int n) {
    int n_count = 0;
    long n_mask = 1, tmp_n = n;

    if(tmp_n == 0) {
        mx_printchar('0');
        return;
    }

    if(tmp_n < 0) {
        tmp_n *= -1;
        mx_printchar('-');
    }

    for(int n_cpy = tmp_n; n_cpy != 0;
        n_cpy /= 10, n_count++, n_mask *= 10);

    for(int i = 0; i < n_count; i++) {
        n_mask /= 10;
        mx_printchar(tmp_n / n_mask + 48);
        tmp_n %= n_mask;
    }
}


#include "../inc/libmx.h"

int mx_sqrt(int x) {
    int i;
    long sqr;
    for (i = 1, sqr = 1; sqr < x; i++, sqr = i * i);
    return sqr == x ? i : 0;
}


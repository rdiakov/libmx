#include "../inc/libmx.h"

int mx_space_check(char c) {
    return (c == ' ' || (c <= 13 && c >= 9)) ? 1 : 0;
}


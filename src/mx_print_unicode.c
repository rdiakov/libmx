#include "../inc/libmx.h"

void mx_print_unicode(wchar_t c) {
    char b[4]; 
    int i = 0;
    
    if(c < 0x80) {
        i = 1;
        b[0] = (char)c;
    }
    else if(c < 0x800) {
        b[1] = 0x80 | (c & 0x3F);
        b[0] = 0xC0 | ((c >> 6) & 0x1F);
        i = 2;
    }
    else if(c < 0x10000) {
        b[2] = 0x80 | (c & 0x3F);
        b[1] = 0x80 | ((c >> 6) & 0x3F);
        b[0] = 0xE0 | ((c >> 12) & 0x0F);
        i = 3;
    }
    else if(c < 0x200000) {
        b[3] = 0x80 | (c & 0x3F);
        b[2] = 0x80 | ((c >> 6) & 0x3F);
        b[1] = 0x80 | ((c >> 12) & 0x3F);
        b[0] = 0xF0 | ((c >> 18) & 0x07);
        i = 4;
    }
    write(1, b, i);
}


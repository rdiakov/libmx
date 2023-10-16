#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
    if(!file) return NULL;
    int fdsc = open(file, O_RDONLY);
    if(fdsc < 0) return NULL;
    char c;
    int i;
    for(i = 0; read(fdsc, &c, 1) != 0; i++);
    close(fdsc);
    fdsc = open(file, O_RDONLY);
    char *result = mx_strnew(i);
    read(fdsc, result, i);
    close(fdsc);
    return result;
}

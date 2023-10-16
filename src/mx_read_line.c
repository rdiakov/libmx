#include "../inc/libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd){
    static char* remainder;
    if(fd < 0 || buf_size < 1) return -2; 
    char *str = mx_strnew(buf_size);
    char *pnt = *lineptr;
    int len = read(fd, str, buf_size);
    
    int sum = 0;
    if(len == 0 && !remainder) return -1;
    if(remainder) {
        mx_strcpy(pnt, remainder);
        sum += mx_strlen(remainder);
        pnt += sum;
        free(remainder);
    }
    
    while(len != 0) {
        int ind = mx_get_char_index(str, delim);
        if(ind >= 0) {
            mx_strncpy(pnt, str, ind);
            sum += ind;
            pnt += ind;
            if(ind < len) {
                remainder = mx_strnew(len - ind - 1);
                str += ind + 1;
                mx_strcpy(remainder, str);
            }
            break;
        }
        mx_strncpy(pnt, str, len);
        pnt += len;
        sum += len;
        len = read(fd, str, buf_size);
    }
    
    return sum;
}

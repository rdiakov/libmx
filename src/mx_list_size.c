#include "../inc/libmx.h"

int mx_list_size(t_list *list) {
    int i = 0;
    for(; list != NULL; i++, list = list->next);
    return i;
}

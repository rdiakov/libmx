#include "../inc/libmx.h"

t_list *mx_create_node(void *data) {
    t_list *n = malloc(sizeof(t_list));
    n->data = data;
    n->next = NULL;
    return n;
}


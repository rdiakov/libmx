#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *n = mx_create_node(data);
    t_list *pnt = *list;
    for(; pnt->next != NULL; pnt = pnt->next);
    pnt->next = n;
}

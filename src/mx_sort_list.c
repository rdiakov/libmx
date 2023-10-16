#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool(*cmp)(void*, void*)) {
    t_list *n = lst;
    t_list *right_border;

    for(right_border = n; right_border != NULL; 
        right_border = right_border->next);

    while(right_border != lst->next) {
        n = lst;
        while (n->next != right_border) {
            if(cmp(n->data, n->next->data)) {
                void *tmp = n->data;
                n->data = n->next->data;
                n->next->data = tmp;
            }
            n = n->next;
        }
        right_border = n;
    }
    return lst;
}

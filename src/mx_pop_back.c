#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {
    t_list *pre_last = *head;
    for(; pre_last->next->next != NULL; pre_last = pre_last->next);
    free(pre_last->next);
    pre_last->next = NULL;
}

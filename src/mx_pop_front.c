#include "../inc/libmx.h"

void mx_pop_front(t_list **head){
    t_list *next = (*head)->next;
    free(*head);
    *head = next;
}

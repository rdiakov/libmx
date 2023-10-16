#include "../inc/libmx.h"

bool cmp(void *s1, void *s2) {
    if(mx_strcmp(s1, s2) > 0) return true;
    return false;
}

int main() {
    t_list *n = mx_create_node(mx_strdup("1"));
    mx_push_back(&n, mx_strdup("2"));
    mx_push_back(&n, mx_strdup("3"));
    mx_push_back(&n, mx_strdup("5"));
    mx_push_back(&n, mx_strdup("4"));
    mx_push_back(&n, mx_strdup("8"));
    mx_push_back(&n, mx_strdup("1"));
    mx_sort_list(n, cmp);
    while (n) {
        printf("%s\n", n->data);
        n = n->next;
    }
    
    
}

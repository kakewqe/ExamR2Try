#include "list.h"
#include <stdio.h>
#include <stdlib.h>
/*
t_list *ft_new_noed(int val)
{
    t_list *element = malloc(sizeof(t_list));
    element->data = val;
    element->next = NULL;
    return (element);
}
*/
t_list *ft_last(t_list *list)
{
    while(list->next && list)
    {    
        if (list->next == NULL)    
            return(list);
        list = list->next;
    }
    return(list);
}


void addlastlist(t_list **list, t_list *new)
{
    if(!new)
    {
        new = ft_last(*list);
        new->next = NULL;
    }
    else
        *list = new;
}
/*
void print_list(t_list *list)
{
    while(list)
    {
        printf("[%d]", list->data);
        list = list->next;
    }
    printf("\n");
}

int main(void)
{
    t_list *mylist = NULL;
    
    t_list *n4 = ft_new_noed(1);

    addlastlist(&mylist, n4);
    
    print_list(mylist);
    return (0);
}
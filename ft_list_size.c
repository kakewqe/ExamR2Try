#include "ft_list_size.h"
#include <stdlib.h>
#include <stdio.h>
/*
t_list *ft_newlist(int data)
{
    t_list *elm = malloc(sizeof(t_list));
    if (!elm)
        return (NULL);
    int *data_ptr = malloc(sizeof(int));
    if (!data_ptr)
        return(NULL);
    *data_ptr = data;
    elm->data = data_ptr;
    elm->next = NULL;
    return (elm);
}

void addfront(t_list **list, t_list *new)
{
    new->next = *list;
    *list = new;
}
*/
int	ft_list_size(t_list *begin_list)
{
    int i = 0;
    
    while(begin_list)
    {
        begin_list = begin_list->next;
        i++;
    }
    return(i);
}
/*
int main(void)
{
    t_list *mylist = NULL;
    
    t_list *node1 = ft_newlist(10);
    addfront(&mylist, node1);
    t_list *node2 = ft_newlist(11);
    addfront(&mylist, node2);
    t_list *node3 = ft_newlist(12);
    addfront(&mylist, node3);
    t_list *node4 = ft_newlist(12);
    addfront(&mylist, node4);

    printf("%d\n", ft_list_size(mylist));

}
*/

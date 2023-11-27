#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_new_noed(int val)
{
    t_list *elem = malloc(sizeof(t_list));
        if(!elem)
            exit(EXIT_FAILURE);
        elem->value = val;
        elem->next = NULL;
        return elem;
}

void print_list(t_list *list)
{
    while (list)
    {
        printf("[%d]->", list->value);
        list = list->next;
    }
    printf("\n");
}

t_list *last_elem(t_list *list)
{
    while (list->next)
        list = list->next;
    return (list);
}

void addlastlist(t_list **list, t_list *new)
{
    t_list *last;
    
    if(*list != NULL)
    {
        last = last_elem(*list);
        last->next = new;
        new->next = NULL; 
    }
    else
        *list = new;   
}

void addfront(t_list **list, t_list *new)
{
        new->next = *list;
        *list = new;
}

size_t ft_sizelist(t_list *list)
{
    size_t i = 0;

    while(list)
    {   
        list = list->next;
        i++;
    }
    return(i);
}

void free_list(t_list *list)
{
    t_list *temp;
    while(list != NULL)
    {    
        temp = list;
        list = list->next;
        free(temp);
    }
}


int main(void)
{
    t_list *mylist = NULL;
    size_t size = 0;
    size = ft_sizelist(mylist);


    t_list *n1 = ft_new_noed(4);
    t_list *n2 = ft_new_noed(3);
    t_list *n3 = ft_new_noed(2);
    t_list *n4 = ft_new_noed(1);
    t_list *n5 = ft_new_noed(1);
    
    addlastlist(&mylist, n2);
    addlastlist(&mylist, n3);
    addlastlist(&mylist, n4);
    addlastlist(&mylist, n5);
    addfront(&mylist, n1);
    
    print_list(mylist);
    printf("size de la list = %ld\n", ft_sizelist(mylist));
    free_list(mylist);
    
    return 0;
}









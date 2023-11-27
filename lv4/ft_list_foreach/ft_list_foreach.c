#include "ft_list.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr;

    list_ptr = begin_list;
    while (list_ptr)
    {
        (*f)(list_ptr->data);
        list_ptr = list_ptr->next;
    }
}


void print_int(void *data)
{
    if (data != NULL) 
        printf("%d\n", *(int *)data);
}

t_list *ft_new(int data)
 {
    t_list *elem = malloc(sizeof(t_list));
    if(!elem)
        return NULL;

    int *data_ptr = malloc(sizeof(int));
    if (!data_ptr) {
        free(elem); 
        return NULL;
    }

    *data_ptr = data; // Stocker la valeur de data dans la mémoire allouée
    elem->data = data_ptr; // Assigner l'adresse de data_ptr à elem->data
    elem->next = NULL;
    return elem;
}

void addfront(t_list **flist, t_list *new)
{
    new->next = *flist;
    *flist = new;

}

int main(void)
{   
    t_list *mylist = NULL;
    
    t_list *noed1 = ft_new(10);
    addfront(&mylist, noed1);
    t_list *noed2 = ft_new(20);
    addfront(&mylist, noed2);
    t_list *noed3 = ft_new(30);
    addfront(&mylist, noed3);

    ft_list_foreach(mylist, print_int);

    return 0;
}

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int     *ft_range(int start, int end)
{
    int i = 0;
    int size;
    int *tab;
    
    if (start > end)
        size = (start - end) + 1;
    else
        size = (end - start) + 1;
    
    tab = malloc(sizeof(int) * (size));
    if(tab == NULL)
        return (NULL);
    
    while (i < size)
    {
        if (start > end)
            tab[i++] = start--;
        else
            tab[i++] = start++;
    }
    return (tab);   
}

/*
int main(int ac, char **av)
{
    int i = 0;
    int size;
    int *tab;
    int start; 
    int end;

    if (ac == 3)
    {
        start = atoi(av[1]);
        end =  atoi(av[2]);

        if (start > end)
            size = (start - end) + 1;
        else
            size = (end - start) + 1;
        
        tab = ft_range(start, end);
        
        while (i < size)
        {
            printf("%d ", tab[i]);       
            i++;
        }        
    }
    printf("\n");
}
*/
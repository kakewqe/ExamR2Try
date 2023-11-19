#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int *tab;
    int i;
    int size;
    
    if(start > end)
        size = (start - end) + 1;
    else
        size = (end - start) + 1; 

    tab = malloc(sizeof(int) * size);
        if (!tab)
            return(NULL);

    i = 0;
    while (i < size)
    {
        if (start > end)
            tab[i++] = end++;
        else
            tab[i++] = end--;
    }
    return (tab);
}

int main(int ac, char **av)
{
    int *tab;
    int start = atoi(av[1]);
    int end = atoi(av[2]);
    int size = 0;
    int i = 0;

    if (start > end)
        size = (start - end) + 1;
    else 
        size = (end - start) + 1;

    tab = ft_rrange(start, end); 

    i = 0;
    while(i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    return 0;
}
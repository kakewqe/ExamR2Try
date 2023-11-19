#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int size = 0;
    int i = 0;
    int *tabs;
    size = abs(end - start) + 1; 
    tabs = (int *)malloc(size * sizeof(int));   

    while (i < size)
    {
        if (start < end)
            tabs[i] = start++;
        else
            tabs[i] = start--;
        i++;
    }
    return(tabs);
}



int main(int ac, char **av)
{
     if (ac != 3) 
    {
        printf("ERROR\n");
        return 2;
    }
    
    int size = (abs((atoi(av[2])) - atoi(av[1]))) + 1;
    int *tab = ft_range(atoi(av[1]),  atoi(av[2]));

    int i = 0;
    while(i < size)
    {
        printf("[%d] ", tab[i]);
        i++;
    }
    printf("\n");
    return 0;

}


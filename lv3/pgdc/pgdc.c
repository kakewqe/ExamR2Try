#include <stdio.h>
#include <stdlib.h>


int ft_pgdc(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else 
            b = b - a;
    }
    return a;
}

int main(int ac, char **av)
{   
    if(ac == 3)
        printf("%d", ft_pgdc(atoi(av[1]), atoi(av[2])));
    printf("\n");
}
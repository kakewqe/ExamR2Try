#include <stdio.h>

int		max(unsigned int *tab, unsigned int len)
{   
    unsigned int i = 0;
    unsigned res;

    if (len == 0)
        return 0;
    while (i < len)
    {
        if(tab[i] < tab[i + 1])
            res = tab[i + 1];
        i++;
    }
    return (res);
}

int main(void)
{
    unsigned int tab[]={100,112,123,15,231,90000};

    printf("%d", max(tab, 2));
}
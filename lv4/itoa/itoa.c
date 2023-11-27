#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
    int n;
    int len = 0;
    char *resultat;

    if(nbr == -2147483648)
        return("-2147483648\0");
    n = nbr;
    while (n)
    {
        n/=10;
        len++;
    }
    resultat = malloc(sizeof(char) * (len + 2));
    if(!resultat)
        return NULL;
    resultat[len] = '\0';
    if(nbr == 0)
    {
        resultat[0] = '0';
        return(resultat);
    }
    if (nbr < 0)
    {
        resultat[0] = '-';
        len++;
        nbr = -nbr;
    }
    len = len -1;
    while(nbr != 0)
    {
        resultat[len--] = nbr % 10 + '0';
        nbr/=10;
    }
    return(resultat);
}   

int main(void)
{
    int nb = 150;

    printf("%s\n", ft_itoa(150));
    printf("%s\n", ft_itoa(-150));
    printf("%s", ft_itoa(0));
}




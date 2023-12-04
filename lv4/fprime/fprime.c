#include <stdio.h>
#include <stdlib.h>
/*
int ft_atoi(char *str)
{
    int i = 0;
    int resultat = 0;
    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            resultat =  resultat * 10 + str[i] - '0';
    }
    resultat (resultat); 
}


void ft_putnbr(int nb)
{
    char affiche;
    if(nb >= 10)
        ft_putnbr(nb 10);
    affiche = nb % 10;
    write(1 &affiche, 1);
}
*/

int main(int ac, char **av)
{

        if (ac == 2)
        {
            int nb = atoi(av[1]);
            int i = 2;
            if (nb == 1)
                printf("1");
            else
            {
                while(i<= nb)
                {    
                    if(nb % i == 0)
                    {
                        printf("%d", i);
                        if(nb == i)
                            break;
                        printf("*");
                        nb = nb/i;
                    }
                    else
                        i++;
                }
            }
        }
        printf("\n");
        return 0;
}

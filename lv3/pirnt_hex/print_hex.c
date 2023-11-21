#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int resulat = 0;

    if(str[i] == '-')
    {
        sign = -1;    
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        resulat = resulat * 10 + str[i] - '0';
        resulat = resulat * sign;
        i++;
    }
    return resulat;
    
}

void ft_putnbr(int nb)
{
    char hexa[] ="0123456789abcdef";
    char affiche;

    if (nb >= 16)
        ft_putnbr(nb/16);
    affiche = hexa[nb % 16];
    write(1, &affiche, 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        ft_putnbr(ft_atoi(av[1]));
    write(1, "\n", 1);
}
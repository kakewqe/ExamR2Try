#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int sig = 1;
    int resultat = 0;

    if (str[i] == '-')
    {
        sig = -1;
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        resultat = resultat * 10 + str[i] - '0';
        resultat  = resultat * sig;
        i++;
    }
    return (resultat);
}

void print_hex(int nb)
{   
    char hex[]="0123456789abcdef";

    if(nb >= 16)
       print_hex(nb/16);
    write(1, &hex[nb % 16], 1);
}

int main(int ac, char **av)
{
    if(ac == 2)
        print_hex(ft_atoi(av[1]));
    write(1, "\n", 1);
}
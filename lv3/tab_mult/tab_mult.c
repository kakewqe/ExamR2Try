#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int resultat = 0;

    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            resultat = resultat * 10 + str[i] - '0';
        i++;
    }
    return resultat;

}

void ft_putnbr(int nb)
{   
    char digite;
        if (nb >= 10)
            ft_putnbr(nb / 10);
        digite = nb % 10 + '0';
        write(1, &digite, 1);
}

int main(int ac, char **av)
{
    unsigned int count = 1;
    unsigned int value = 0;
    char countc;
    char multi;
    char afficheresulat;
    

    if (ac != 2)
         write(1, "\n", 1);
    else
    {
        value = ft_atoi(av[1]);
        while(count < 10)
        {
            ft_putnbr(count);
            write(1, " x ", 3);
            ft_putnbr(value);
            write(1, " = ", 3);
            ft_putnbr(count * value);
            count += 1;
            write(1, "\n", 1);
        }
    }
}
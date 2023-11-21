#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int resultat;

    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            resultat = resultat * 10 + str[i] - '0';
        i++;
    }
    return resultat;

}

char ft_putnbr(int nb)
{   
    char digite;
    char affichenb;
        if (nb >= 10)
            ft_putnbr(nb / 10);
        return (nb % 10 + '0');  
}
/*
int tab(int count, int value)
{}
*/

int main(int ac, char **av)
{
    unsigned int count = 1;
    unsigned value = ft_atoi(av[1]);
    char countc;
    
    while(count != 10)
    {
        countc = ft_putnbr(count);
        write(1, &countc, 1);


        count += 1;
        write(1, "\n", 1);
    }

}
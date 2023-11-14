#include <unistd.h>
#include <stdint.h>

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;

    while(str[i])
    {
        res = res * 10 + str[i] - '0';
            i++;
    }
    return (res);
}

void putnbr(int nb)
{
    if(nb >= 10)
        putnbr(nb / 10);
    char dig = nb % 10 + '0';
    write(1, &dig, 1);

}

int is_prim(int nb)
{
    int i = 2;

    if (nb <= 1)
        return 0;
    while (i * i <= nb)
    {   
        if(nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    int nbr = 0;
    int sum = 0;
        
    if (ac == 2)
    {   
        nbr = ft_atoi(av[1]); 
        while (nbr > 0)
        {
            if (is_prim(nbr))
                sum += nbr;
            nbr--;
        }
        putnbr(sum);
    }
    write(1, "\n", 1);
    return (0);
}
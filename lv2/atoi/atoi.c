#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int sig;
    int res;

    res = 0;
    sig = 1;
    i = 0;

    while(str[i] == 32 || (str[i] >=  9  && str[i] <= 13 ))
            i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        sig = -1;
        i++;
    }       
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * sig);

}


int main(int ac, char **av)
{
    if (ac == 4)
    {
        if (av[2][0] == '+')
            printf("%d", (ft_atoi(av[1]) + ft_atoi(av[3])));
        if (av[2][0] == '-')
            printf("%d", (ft_atoi(av[1]) - ft_atoi(av[3])));
        if (av[2][0] == '*')
            printf("%d", (ft_atoi(av[1]) * ft_atoi(av[3])));
        if (av[2][0] == '/')
            printf("%d", (ft_atoi(av[1]) / ft_atoi(av[3])));
        if (av[2][0] == '%')
            printf("%d", (ft_atoi(av[1]) % ft_atoi(av[3])));
    }
    printf("\n");
}


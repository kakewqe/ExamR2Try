#include <unistd.h>

void ft_putstr(char const *str)
{
    while(*str)
        write(1, &*str++, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;

    if (ac == 3)
    {
        while(av[2][j])
        {
            if (av[1][i] == av[2][j])
                i++;
            j++;
        }
        if (av[1][i] == 00)
            ft_putstr(av[1]);
        return (write(1, "\n", 1) && 1);
    }
    write(1, "\n", 1);
    return 0;
}
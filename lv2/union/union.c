#include <unistd.h>

int check_str(char *str, char c)
{
    while (*str)
    {
        if (*str == c)
            return 1;
        str++;
    }
    return 0;
}

#include <unistd.h>

int main(int ac, char **av)
{
    int i, j;
    char check_bool[256]= {0};

    if (ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            if (!check_bool[(unsigned char)av[1][i]])
            {
                write(1, &av[1][i], 1);
                check_bool[(unsigned char)av[1][i]] = 1;
            }
            i++;
        }
        j = 0;
        while (av[2][j])
        {
            if (!check_bool[(unsigned char)av[2][j]])
            {
                write(1, &av[2][j], 1);
                check_bool[(unsigned char)av[2][j]] = 1;
            }
            j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

#include <unistd.h>

int check_str(char *str, char c)
{
    while(*str)
    {
        if (*str == c)
            return 1;
        str++;
    }
    return 0;
}

int main(int ac, char **av)
{
    char *str = NULL;
    char strsp[] = {0};
    int i;
    int j;

    if (ac == 2)
    {
            j = 0;
            i = 0;
            
            while (av[1][i])
            {
                if(!strsp[(unsigned char)av[1][i]]) 
                {
                    str[j] = av[1][i];
                    write(1, &str[j], 1);
                    strsp[(unsigned char)av[1][i]] = 1;
                }
                j++;
                i++;
            }
            
            i = 0;
            while (av[2][i])
            {
                while (*str)
                {
                    if (check_str(&av[2][i], *str) && !strsp[(unsigned char)av[2][i]])
                    {
                          str[j] = av[2][i];
                        write(1, &str[j], 1);
                        strsp[(unsigned char)av[2][i]] = 1;
                    }
                    j++;
                    i++;
                }
            }
    }
}
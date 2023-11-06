#include <unistd.h>

int dejaronc(char *str, char c)
 {
    int i = 0;
    while (str[i]) 
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int ac, char **av)
{
    int i = 0;
    int j;
    char strcheck[256] = {0};


    if (ac == 3)
    {  
            while (av[1][i])
            {
                j = 0;
                while(av[2][j])
                {
                    if (!strcheck[(unsigned char)av[1][i]] && dejaronc(av[2], av[1][i]))
                        write(1, &av[1][i], 1);
                    strcheck[(unsigned char)av[1][i]] = 1; 
                    break;
                }
                i++;
            }
    }  
    write(1, "\n", 1);
    return 0;
}

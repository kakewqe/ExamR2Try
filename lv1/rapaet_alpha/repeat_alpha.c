#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    char *str = av[1];

    if (ac == 2)
    {
        while (str[i])
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                j = str[i] - 'A';
                while(j >= 0)
                {
                    write(1, &str[i], 1);
                    j--;
                }
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                j = str[i] - 'a';
                while(j >= 0)
                {
                    write(1, &str[i], 1);
                    j--;
                }
            }
            else
                write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
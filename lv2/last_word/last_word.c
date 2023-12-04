#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int start = 0;

    if(ac == 2)
    {
            while(av[1][i])
            {
                if ((av[1][i] == ' ' && (av[1][i + 1] >= 33 && av[1][i + 1] <= 126)))
                    start = i;
                i++;
            }
            while(av[1][start])
            {
                    if(av[1][start] != 00 && av[1][start] != 32)
                        write(1, &av[1][start], 1);
                    start++;
            }
    }
    write(1, "\n", 1);
}
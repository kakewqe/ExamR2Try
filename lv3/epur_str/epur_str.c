#include <unistd.h>


int main(int ac, char **av)
{
    int i;

            
        if (ac == 2)
        {
            i = 0;  
            while(av[1][i] == 32 || av[1][i] == 9)
                i++;
            while (av[1][i])
            {
                if (av[1][i] == 32 || av[1][i] == 9)
                {
                    if (av[1][i + 1] > 32 && av[1][i + 1] != 00)
                    write(1, " ", 1);
                }
                else if (av[1][i] != 32 && av[1][i] != 9)
                    write(1, &av[1][i], 1);
                i++;
            }
        }
        write(1, "\n", 1);
        return (0);
}
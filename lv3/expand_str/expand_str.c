#include <unistd.h>

int main(int ac, char **av)
{

    int i = 0; 

    if (ac == 2)
    {
        while(av[1][i] == 32 || av[1][i] == 9)
        {
            i++;
        }
        while(av[1][i])
        {
            if(av[1][i] == ' ' && (av[1][i + 1] != ' ' && av[1][i + 1] != 00))
            {
                write(1, "   ", 3);
            }
            else if (av[1][i] >= 33 && av[1][i] <= 126)
                    write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1); 
}
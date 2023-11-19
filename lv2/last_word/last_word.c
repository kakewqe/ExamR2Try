#include <unistd.h>


int main(int ac, char **av)
{
    int i;
    int start;

    if (ac == 2)
    {
        i = 0; 
        while(av[1][i])
        {
            if (av[1][i] == 32 && av[1][i + 1] >= 32 && av[1][i + 1] <= 126)
                start = i + 1;            
            i++;
        }

        while (av[1][start] != 32 && av[1][start] != 00)
        {
            write(1, &av[1][start], 1);
            start++;
        }
        
    }        
    write(1, "\n", 1);


}
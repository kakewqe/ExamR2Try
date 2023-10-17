#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;


    if (ac == 2)
    {
        i = 0;
        while(av[1][i])
        {
            char c = av[1][i];
            if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
            {
                j = 0;
                if (c >= 'A' && c <= 'Z')
                {
                    j = c - 65;
                    while (j >= 0)
                    {
                        write(1, &c, 1);
                        j--;
                    }
                }
                else if (c >= 'a' && c <= 'z')
                {
                    j = c - 97;
                    while (j >= 0)
                    {
                        write(1, &c, 1);
                        j--;
                    }
                }
            }
            else    
                write(1, &c, 1);
        i++;
        }

    }
    write(1, "\n", 1);
    return 0;
}
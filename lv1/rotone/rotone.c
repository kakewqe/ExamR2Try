#include <unistd.h>


int main(int ac, char **av)
{
    int i = 0;
    char c;

    if (ac == 2)
    {   
        while(av[1][i])
        {
            c = av[1][i];
            if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'z') 
            {
                if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
                      c = c + 1;
                else if ((c == 'z') || (c == 'Z'))
                    c =  c - 25;
            }
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
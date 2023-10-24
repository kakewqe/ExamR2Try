#include <unistd.h>


int main(int ac, char **av)
{
    char *str = av[1];

    if (ac == 2)
    {
        while (*str)
        {       
            if ((*str >= 'A' && *str <='Y') || (*str >= 'a' && *str <='y'))
            {
                *str += 1;
                write(1, &*str, 1);
            }
            else if ((*str == 'Z') || (*str == 'z'))
            {
                *str -= 25;
                write(1, &*str, 1);
            }
            else 
                write(1, &*str, 1);
            str++;
        }
        write(1, "\n", 1);
    }
}
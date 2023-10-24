#include <unistd.h>


int main(int ac, char **av)
{
    int i = 0;
    char *str;

    if (ac == 2) 
    {   
        str = av[1];
        while (str[i])
        {
            if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))     
            {
                    *str += 13;
                    write(1, &*str, 1);
            }
            else if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))     
            {
                    *str -= 13;
                    write(1, &*str, 1);
            }
            else
                write(1, &*str, 1);
            str++;
        }
    }
    write(1, "\n", 1);
}
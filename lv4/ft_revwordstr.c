#include <unistd.h>

#include <unistd.h>

void ft_rev_wstr(char *str)
{
    int i = 0;
    int j;
    int start;
    int end;
    int dep = 0;

    while (str[i])
        i++;
    end = i;
    i--;
    while(i >= 0)
    {
        if (str[i] == ' ' || i == 0)
        {
            if (i == 0)
                start = i;
            else
                start = i + 1;
            if (dep) 
                write(1, " ", 1);
            else 
                dep = 1; 
            write(1, str + start, end - start);

            end = i;
        }
        i--;
    }
}
int main(int ac, char **av)
{
    if(ac == 2)
        ft_rev_wstr(av[1]);
    write(1, "\n", 1);
    return (0);
}
#include <unistd.h>


void ft_putnbr(int n)
{
    char digite;

    if(n >= 10)
        ft_putnbr(n/10);
    digite = (n % 10) + '0';
    write(1, &digite, 1);
    
}

int main(int ac, char **av)
{   
    (void)av;

    ft_putnbr(ac);
    write(1, "\n", 1);
    return 0;
}


#include <stdio.h>

int	  is_power_of_2(unsigned int n)
{
    unsigned int  nbr = 1;

    if (n == 0)
        return (0);
    
    while (n % 2 == 0)
    {
        n/=2;
        if (n == nbr)
            return 1;
    }
    return 0;
}

int main(void)
{
    unsigned int n = 32;
    if (is_power_of_2(n) == 1)
        printf("%d est une puisance de 2", n);
    else
        printf("%d n'est pas une puissance de 2", n);
}



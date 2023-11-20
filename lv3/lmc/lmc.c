#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int max;
    unsigned int min;
    unsigned int i = 0;
    
    if (a > b)
    {
        max = a;
        min = b;
    }
    else 
    {
        max = b;
        min = a;
    }
    i = max;
    while(1)
    {
        if (i % min == 0)
            return (i);
        i += max;
    }
}

int main(void)
{
    unsigned int a = 12;
    unsigned int b = 18;

    printf("%d", lcm2(a, b));
}
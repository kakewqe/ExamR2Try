
#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i;

    i = 8;
    while(i--)
    {
        if(octet & (1 << i))
            write(1, "1", 1);
        else
            write(1, "0", 2);
    }
    write(1, "\n", 1);
}


int main(void)
{
    print_bits((char)255);
}
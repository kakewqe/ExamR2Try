#include <stdio.h>
#include <unistd.h>
/*
void	print_bits(unsigned char octet)
{
    int i;

    i = 8;
    while(i--)
    {
        if(octet & (1 << i))
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
}
*/

unsigned char reverse_bits(unsigned char octet)
{
    int i = 0;
    unsigned char res = 0;
    unsigned char temp;

    while (i < 8)
    {
        res <<= 1;
        temp =  octet & 1;
        res |= temp;
        octet >>= 1;
        i++;
    }
    return res;
}
/*
int main() 
{
    unsigned char octet = 38;

    printf("L'octet original en binaire\n");
    print_bits(octet);
    printf("\n");

    printf("L'octet inversé en binaire\n ");
    print_bits(reverse_bits(octet));
    printf("\n");

    return 0;
}
*/

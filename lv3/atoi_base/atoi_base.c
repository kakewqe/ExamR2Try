#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int res = 0;
    int sg = 1;
    int deg = 0;
    
    if (str[i] == '-')  
    {    
        sg = -1;
        i++;
    }

    while(str[i])
    {

        if (str[i] >= '0' && str[i] <= '9')
            deg = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'z')
            deg = 10 + str[i] - 'a';
        else if (str[i] >= 'A' && str[i] <= 'z')
            deg = 10 + str[i] - 'A';
        else 
            return 0;

        res = res * str_base + deg;
        i++;
    }
    return (res * sg);
}

int main() 
{
    const char *hexadecimal_string = "-12fdb3"; // Chaîne en base 16
    int decimal_result = ft_atoi_base(hexadecimal_string, 16);

    printf("Chaîne hexadécimale : %s\n", hexadecimal_string);
    printf("Valeur décimale : %d\n", decimal_result);

    return 0;
}

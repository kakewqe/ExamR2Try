#include <stdio.h>

int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int result = 0;
    int sign = 1;
    int digit;

    // Vérification de la validité de la base
    if (str_base < 2 || str_base > 16) 
        return 0; 
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }

    // Conversion de la chaîne en entier
    while (str[i])
    {
        // Vérification des caractères valides
        if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F'))
        {
            if (str[i] >= '0' && str[i] <= '9')
                digit = str[i] - '0';
            else if (str[i] >= 'a' && str[i] <= 'f')
                digit = 10 + str[i] - 'a';
            else if (str[i] >= 'A' && str[i] <= 'F')
                digit = 10 + str[i] - 'A';
            result = result * str_base + digit;
        }
        else
            return 0; 
        i++;
    }

    return result * sign;
}

int main() 
{
    const char *hexadecimal_string = "-12fdb3"; // Chaîne en base 16
    int decimal_result = ft_atoi_base(hexadecimal_string, 16);

    printf("Chaîne hexadécimale : %s\n", hexadecimal_string);
    printf("Valeur décimale : %d\n", decimal_result);

    return 0;
}

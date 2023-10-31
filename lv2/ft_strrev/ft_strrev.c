#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

char    *ft_strrev(char *str)
{
    int len = 0;
    int i = 0;
    char temp;

    len = ft_strlen(str) - 1;
    while (i < len)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        len--;
        i++;
        
    }
    return str;
}

int main(void)
{   
    char str[] = "1234";
    char *rstr = NULL;

    rstr = ft_strrev(str);
    printf("%s", rstr);

}
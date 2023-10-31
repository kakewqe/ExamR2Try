#include <stdio.h>
#include <stdlib.h>

char *ft_strndup(char *s, size_t n)
{
    char *str;
    size_t i;

    str = (char *)malloc(n + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (i < n && s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return(str);
}

int main(void)
{
    char *str1="ines t'es une bolosesesee mon coeur !";
    char *str2 =  NULL;
    
    str2 = ft_strndup(str1, 5);
    if (!str2)
        return (1);
    printf("%s\n", str2);
    free(str2);

}
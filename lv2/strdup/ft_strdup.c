#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
    int i;
    char *str;
    
    i = 0;
    while (src[i])
        i++;
    str = (char *)malloc((i + 1) * sizeof(char));
    if (!str)
        return NULL;
    i = 0;
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return(str);
}

int main(void)
{
    char *str1="ines t'es une bolosesesee mon coeur !";
    char *str2 =  NULL;
    
    str2 = ft_strdup(str1);
    if (!str2)
        return (1);
    printf("%s\n", str2);
    free(str2);

}
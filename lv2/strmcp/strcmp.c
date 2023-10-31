#include <unistd.h>
#include <stdio.h>


int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] && s2[i] && (s1[i] == s2[i]))
            i++;
    return (s1[i] - s2[i]);


}

int main(void)
{
    char *s1 ="bonjoursa";
    char *s2 ="bonjoursz";
    printf("Tesst 1 = %d\n", ft_strcmp(s1 , s2));

    char *s3 = "bonjour";
    char *s4 = "bonjour";    
    printf("Tesst 2 = %d\n", ft_strcmp(s3 , s4));


    char *s5 ="bonjoursz";
    char *s6 ="bonjoursa";
    printf("Tesst 2 = %d\n", ft_strcmp(s5 , s6));
}
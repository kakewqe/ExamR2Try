#include <stdlib.h>
#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i;
    int j;

    i = 0;
    if (!s1 || !s2)
        return 0;
    while(s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if(s1[i] == s2[j])
                return ((char *) (s1 + i));
            j++;
        }
        i++;
    }
    return 0;
}   

int main(void)
{
    char *s1 = "bonjours";
    char *s2 = "1324u";
    char *s3 =  NULL;
    
    s3 = ft_strpbrk(s1, s2);

    printf("%s", s3);

}
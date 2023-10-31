#include <unistd.h>
#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    size_t size = 0;

    while (s[i])
    {
        int j = 0 ;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return size;
            j++;
        }
     i++;
     size++;   
    }
    return size;
}

int main(void)
{
    char *s1= "ines la boxylose";
    char rej[] = "y1";
    char rej1[] = "xy";

    printf("t1 = %ld\n", ft_strcspn(s1, rej));
    printf("t2 = %ld\n", ft_strcspn(s1, rej1));

}
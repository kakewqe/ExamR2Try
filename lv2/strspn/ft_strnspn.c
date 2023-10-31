
#include <stdlib.h>
#include <stdio.h>

const char *ft_strchr(const char *str, int c) {
    while (*str) 
    {
        if (*str == c)
            return str;
        str++;
    }
    return NULL;
}

size_t ft_strspn(const char *s, const char *accept) {
    size_t i = 0;

    while (s[i]) 
    {
        if (ft_strchr(accept, s[i]) != NULL)
            i++;
        else
            break;
    }
    return i;
}


int main() {
    const char *str = "hello 5wooxrd";
    const char *charset = "hello 5woord";

    // Test ft_strspn
    size_t length = ft_strspn(str, charset);
    printf("%zu\n", length);

    return 0;
}
#include <unistd.h>

int check_str(char *str, int c)
{
    int i = 0;

    while (str[i])
    {
            if(str[i] == c)
                return 1;
            i++;
    }
    return 0;
}


int main(int ac, char **av)
{
    char ascii_ascii[256]={0};
    int i = 0;

    if (ac == 3)
    {
        while(av[1][i])
        {
            int j = 0;
            while (av[2][j])
            {
                if (!ascii_ascii[(unsigned char)av[1][i]] && check_str(av[2], av[1][i]))
                    write(1, &av[1][i], 1);
                ascii_ascii[(unsigned char)av[1][i]] = 1;
                j++;
                break;
            }
            i++;
        }
        write(1, "\n", 1);
    }
}

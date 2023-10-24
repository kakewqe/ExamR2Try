#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    i = 0;
    char *str;

    if (argc == 2)
    {    
        str = argv[1];
            while(str[i])
                i++;
            while(i >= 0)
                write(1, &str[i--], 1);    
            write(1, "\n", 1);
    }
  
    
}
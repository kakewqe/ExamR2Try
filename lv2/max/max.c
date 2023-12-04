#include <stdio.h>
#include <unistd.h>

int		max(int* tab, unsigned int len)
{
    if (tab == NULL || len == 0)    
        return 0;

  	int max = tab[0]; 
   	int i = 1;

    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return max;
}

/*
int main(void)
{
	int tab[]={1, 11, -3, 25};
	int maxi = max(tab, 4);

	printf("%d\n", maxi);
	return (0);
}
*/


#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *b;

    if(min >= max)
        *range = NULL;
        return (0);
    b = (int*)malloc((max-min) * sizeof(int));
    if(b == NULL)
        return (-1);
    else
    {
        i = -1;
        while(++i < max - min)
            b[i] = min + i;
        *range = b;
        return(i);
    }
}

int main(void)
{   
    // int i = 0;
    int max = 20;
    int min = 1;
    int **range = max - min;
    int c = ft_ultimate_range(range,min,max);
    printf("%d",c);
}
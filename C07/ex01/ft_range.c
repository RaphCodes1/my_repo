#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{ 
    int i;
    int *d;
    int *b;
    int size;

    i = 0;
    if(min >= max)
        return (0);
    size = max - min;
    b = (int*)malloc(size * sizeof(int));
    d = b;
    if(!d)
    {
        return (0);
    }
    while(i < size)
    {
        b[i] = min + i;
        i++;
    }
    return(b);
    
}
int main()
{   
    int i = ft_range(1,5);
    printf("%d",i);
}
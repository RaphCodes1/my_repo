#include<stdio.h>

int ft_iterative_factorial(int nb)
{   
    int result = 1;

    while(nb > 1)
    {
        result *= nb;
        nb--; 
    }

    return result;
}

int main(void)
{
    int t1 = ft_iterative_factorial(4);
    printf("%d",t1);
}

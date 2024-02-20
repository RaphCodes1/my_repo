#include <stdio.h>

int ft_recursive_factorial(int nb)
{   
    
    if(nb == 0)
    {
        return 1;
    }
    else
    {
        return nb * ft_recursive_factorial(nb - 1);
    }
}

int main(void)
{
    int c = ft_recursive_factorial(-1);
    printf("%d",c);
}

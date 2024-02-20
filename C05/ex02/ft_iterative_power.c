#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result; 

    result = 1;
    if(nb < 0)
        return (0);
    if(nb == 0 || power == 0)
        return (1);
    if(power == 2)
        return (nb * 2);
    while ((power - 1) <= nb)
    {
        result *= nb;
        power--;
    }
    while(power >= nb)
    {
        result *= nb;
        power--;
    }

    return (result);
}

int main(void)
{
    int  c = ft_iterative_power(3,2);
    printf("%d",c);
}
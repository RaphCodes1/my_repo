#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result; 

    result = 1;
    if(power < 0)
        return (0);
    if(power == 0)
        return (1);
    while(power >= 1)
    {
        result *= nb;
        power--;
    }

    return (result);
}

// int main(void)
// {
//     int  c = ft_iterative_power(-2,2);
//     printf("%d",c);
// }
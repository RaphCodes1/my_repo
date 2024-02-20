#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if(nb < 0)
    {
        return (0);
    }
    else if(nb == 0 || power == 0)
    {
        return (1);
    }
    else 
    {
        return nb * ft_recursive_power(nb, power - 1);
    }
}

int main()
{
    int c = ft_recursive_power(3,10);
    printf("%d",c);

}
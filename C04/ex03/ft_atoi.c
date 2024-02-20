// #include <stdio.h>
// #include <unistd.h>

int ft_atoi(char *str)
{   
    int i;
    int s;

    i = 0;
    s = 1;
    while(*str == 32 || *str >= 9 && *str <= 13)
    {
        str++;
    }
    while(*str == '-' || *str == '+')
    {
        if(*str == '-')
        {
            s *= -1;
        }
        str++;
    }
    while(*str <= '9' && *str >= '1')
    {
        i = i * 10 + *str - '0';
        str++;
    }

    return(i * s);

}
// int main(void)
// {
//     char t1[] = " ---+---+1234ab567";
//     int t2 = ft_atoi(t1);
//     printf("%d",t2);
// }
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

char *ft_strcapitalize(char *str)
{
    int i;
    int t;

    i = 0;
    t = 1;

    while(str[i] != '\0')
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i] = str[i] + 32;
        }
        i++;
    }

    return str;

}

int main()
{
    char str1[] = "RAdfwergHAEL";
    ft_strcapitalize(str1);
    printf("%s",str1);
    printf("\nHello Test");
}
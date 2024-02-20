#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int k;
    i = 0;
    k = 0;

    while(dest[i] != '\0')
    {
        i++;
        k++;
    }

    i = 0;

    while(src[i] != '\0' && i < nb)
    {
        dest[k + i] = src[i];
        i++;
    }

    dest[k + i] = '\0';

    return (dest);
}

int main()
{
    char t1[] = "hello";
    char t2[] = "world";
    ft_strncat(t1,t2,6);
    printf("%s",t1);
}
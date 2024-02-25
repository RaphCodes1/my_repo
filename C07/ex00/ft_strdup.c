#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strdup(char *src)
{
    int i;
    char *dest;
    char *d;

    i = 0;
    dest = (char*)malloc(ft_strlen(src) * sizeof(char) + 1);
    d = dest;
    if(!d)
    {
        return (0);
    }
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
int main()
{
    char *t = ft_strdup("hello");
    printf("%s",t);
}
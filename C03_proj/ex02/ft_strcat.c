#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int k;
    i = 0;
    k = 0;

    while(dest[i] != '\0')
    {   
        i++;
        k++;
    }

    i = 0;
    while(src[i] != '\0')
    {
        dest[i + k] = src[i];
        i++;
    }

    dest[i + k] = '\0';
    return (dest);

}

int main()
{
    char t1[] = "hello";
    char t2[] = "world";
    ft_strcat(t1,t2);
    printf("%s",t1);
}
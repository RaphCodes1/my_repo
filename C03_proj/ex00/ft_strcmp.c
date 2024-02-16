#include <unistd.h>
#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    i = 0;

    while(s1[i] != '\0' && s1[i] == s2[i])
    {   
        i++;
    }
    if(s1[i] == s2[i])
    {
        return(0);
    }
    else
    {
        return (s1[i] - s2[i]);
    }

}

int main()
{
    char t1[] = "program";
    char t2[] ="program";
    int d = strcmp(t1,t2);
    int c = ft_strcmp(t1,t2);
    printf("%d\n",d);
    printf("%d",c);
}
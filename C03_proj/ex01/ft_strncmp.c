#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    unsigned int c;

    i = 0;
    c = 0;

    while(c <= n)
    {   
        
        while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        {
            i++;
        }
        c++;
        
    }

    if(s1[i] == s2[i])
    {
        return (0);
    }
    else
    {
        return(s1[i] - s2[i]);
    }
    
    

    

    
}

int main()
{
    char t1[] = "pr";
    char t2[] ="pa";
    int i = ft_strncmp(t1,t2,2);
    int f = strncmp(t1,t2,2);
    printf("%d\n",f);
    printf("%d",i);
}
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    unsigned int c;

    i = 0;
    c = 0;

    while(c < (n - 1))
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

// int main()
// {
//     char t1[] = "Raphael";
//     char t2[] ="Raphaelll";
//     int i = ft_strncmp(t1,t2,10);
//     int f = strncmp(t1,t2,10);
//     printf("ORIG: %d\n",f);
//     printf("MY VER: %d",i);
// }
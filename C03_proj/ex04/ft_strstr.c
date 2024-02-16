#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
    int i; //1st counter
    int f; //2nd counter
    int w; //3rd counter inside;
    int k; //to_find
    int j; //for str
    char *c;

    i = 0;
    k = 0;

    if(to_find[0] == '\0')
    {
        return str;
    }
    while(to_find[i] != '\0')
    {
        i++;
        k++;
    }
    i = 0;
    while(str[i] != '\0')
    {   
        i++;
        j++;
    }
    i = 0;
    
    while(i < j)
    {   
        if(to_find[i] == str[i])
        {   
            
            c = &str[j - i];
    
        }
        i++;
         
    }

    // c[i] = '\0';

    return (c);

}

int main()
{
    char t1[] = "Hello There World";
    char t2[] = "gg";
    char *t3; // strstr ORIG
    char *t4; // ft_strstr

    t3 = strstr(t1,t2); // strstr ORIG
    t4 = ft_strstr(t1,t2); // ft_strstr
    printf("%s\n",t3);
    printf("%s",t4);
}
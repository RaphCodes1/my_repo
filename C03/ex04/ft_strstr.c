#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
    int i; //1st counter
    int f; //2nd counter
   
    i = 0;

    if(to_find[0] == '\0')
    {
        return (str);
    }
    while(str[i] != '\0')
    {
        f = 0;
        while (str[i + f] == to_find[f])
        {
            if(to_find[f + 1] == '\0')
            {
                return (str + 1);
            }
            f++;
        }
        i++;
    }


}

int main()
{
    char t1[] = "Hello There World";
    char t2[] = " ";
    char *t3; // strstr ORIG
    char *t4; // ft_strstr

    t3 = strstr(t1,t2); // strstr ORIG
    t4 = ft_strstr(t1,t2); // ft_strstr
    printf("%s\n",t3);
    printf("%s",t4);
}
#include <unistd.h>
#include <stdio.h>

char ft_str_is_alpha(char *str)
{
    int i;
    
    i = 0;

    while(str[i] != '\0')
    {   
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            continue;
           
        }else 
        {
            return(printf("0"));
        }
        i++;
        
    }   

    return(printf("1"));

    
}

int main(void)
{
    char c[] = "abcdef";
    ft_str_is_alpha(c);
    printf("hello");

}
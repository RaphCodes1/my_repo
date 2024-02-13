#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;
    int c;

    i = 1;
    c = 1;

    str[0] -= 32;
    while(str[i] != '\0')
    {
        if(str[i + 1]>=33 && str[i + 1]<=126 && !(str[i]>=65 && str[i]<=122)){
            
            if(!(str[i] >= 48 && str[i] <= 57))
            {   
                c = c + i;
                if(str[i + 1]>=65 && str[i + 1]<=122)
                {
                str[i + 1] = str[i + 1] - 32;
                }
               
            }
            else
            {   
                if(c == i){
                    break;
                }
                
            }
        }
        i++;
        continue ;
    }

    return str;
}

int main()
{
    char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(str1);
    printf("%s",str1);
    printf("\nHello Test");
}
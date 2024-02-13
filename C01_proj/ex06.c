#include <unistd.h>
#include <stdio.h>

void ft_strlen(char *str){
    int i;

    i = 0;

    while(str[i] != '\0'){
        i++;
    }

    return printf("%d",i);
    
}

int main(void){
    char *test = "helloww";

    ft_strlen(test);
    
}
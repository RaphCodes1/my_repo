#include <stdio.h>
#include <unistd.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    
}

void test(int size)
{
    char test1[] = "Hello World!";
    char test2[30];
    int r;

    r = strlcpy(test1,test2,r);

    printf("Copied '%s' into '%s',length %d\n",test1,test2,r);

}

int main()
{
    test(5);
    
}

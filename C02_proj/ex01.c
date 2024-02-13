#include <unistd.h>
#include <stdio.h>

void  *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int c;

	c = 0;

	while(c <= n)
	{
		dest[c] = src[c];
		c++;
	}

	while(n >= c)
	{
		dest[c] = '\0'; 
		n--;
	}
	dest[c] = '\0'; 
	
	return(dest);
}

int main(void)
{
	char test[] = "Hello World!";
	char cont[30];
	int num;

	num = 6;

	ft_strncpy(cont,test,num);
	printf("%s",cont);
}

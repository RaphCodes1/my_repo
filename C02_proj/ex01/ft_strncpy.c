/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:02:39 by rcreer            #+#    #+#             */
/*   Updated: 2024/02/15 00:54:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	// dest[i] = '\0';
	return (dest);
}

int main(void)
{
	int	count;
	char str1[] = "Hello World";
	char str2[20];
	count = 20;
	ft_strncpy(str2, str1,count);
	printf("%s\n", str1);
	printf("%s", str2);

	// char src[40];
   	// char dest[12];
  
   	// memset(dest, '\0', sizeof(dest));
   	// strcpy(src, "This is tutorialspoint.com");
   	// strncpy(dest, src, 10);

   	// printf("Final copied string : %s\n", dest);
}

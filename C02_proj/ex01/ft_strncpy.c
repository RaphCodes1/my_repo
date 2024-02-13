/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:02:39 by rcreer            #+#    #+#             */
/*   Updated: 2024/02/14 00:34:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (c <= n)
	{
		dest[c] = src[c];
		c++;
	}
	while (n >= c)
	{
		dest[c] = '\0';
		n--;
	}
	dest[c] = '\0';
	return (dest);
}

int main(void)
{
	int	count;
	char *str1;
	char str2[6];
	str1 = "Hello World";
	count = 8;
	ft_strncpy(str2, str1,count);
	printf("%s", str2);
}

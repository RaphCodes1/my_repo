/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:28:28 by rcreer            #+#    #+#             */
/*   Updated: 2024/02/14 00:34:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	t;

	i = 0;
	t = 1;
	
	if(str[i] == '\0')
	{
		return(t);
	}
	
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
			continue ;
		}
		else
		{
			t = 0;
		}
		break ;
	}
	return(t);
}

int main()
{
	char *str1 = " ";
	ft_str_is_lowercase(str1);
}
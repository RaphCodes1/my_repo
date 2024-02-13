/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:00:06 by rcreer            #+#    #+#             */
/*   Updated: 2024/02/14 00:34:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
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
		if (str[i] <= '9' && str[i] >= '1')
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
    char str1[] = " 11";
    ft_str_is_numeric(str1);
}
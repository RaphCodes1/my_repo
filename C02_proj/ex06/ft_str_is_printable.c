/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:50:39 by rcreer            #+#    #+#             */
/*   Updated: 2024/02/14 00:34:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	t;                                             

	i = 0;
	t = 1;
	if( str[i] == '\0'){
		return (t);
	}
	while (str[i] <= '\0')
	{
		if (str[i] >= 33 && str[i] <= 126)
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
	return (t);
}

int main()
{
	char str[] = " ";
	ft_str_is_printable(str);
	return(0);
}
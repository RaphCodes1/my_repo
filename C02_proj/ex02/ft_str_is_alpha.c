/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:00:55 by rcreer            #+#    #+#             */
/*   Updated: 2024/02/14 00:34:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	t;

	t = 1;

	if(str[i] == '\0')
	{
		return(t);
	}
	
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
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
    char str1[] = "aiufiuwefh  !!!!";
    ft_str_is_alpha(str1);
}

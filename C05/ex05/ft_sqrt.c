/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:44:25 by rcreer            #+#    #+#             */
/*   Updated: 2024/02/21 13:14:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int	ft_sqrt(int nb)
// {
// 	int	i;
// 	int	result;

// 	result = 1;
// 	i = 2;
// 	if (nb < 0 || nb == '\0')
// 	{
// 		return (0);
// 	}
// 	while (i >= 1)
// 	{
// 		result *= nb;
// 		i--;
// 	}
	
// 	return (result);
// }

int ft_sqrt(int nb)
{
	int i;
	int s;

	i = 0;
	s = 0;
	while(i < nb)
	{	
		i++;
		s = i * i;
		
		if(s == nb)
		{
			return (s);
		}
		
	}
	return (0);
}

int	main(void)
{
	int c = ft_sqrt(4);
	printf("%d", c);
}
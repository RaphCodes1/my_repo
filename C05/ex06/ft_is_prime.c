/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:43:54 by rcreer            #+#    #+#             */
/*   Updated: 2024/02/21 02:07:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	checkprime;

	i = 2;
	checkprime = 0;
	if (nb < 2)
		return (0);
	if (nb == i)
		return (1);
	if (nb == 4)
	{
		return (0);
	}
	while (i < (nb / 2))
	{
		if (nb % i == 0)
			checkprime++;
		i++;
	}
	if (checkprime == 0)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int c = ft_is_prime(4);
// 	printf("%d", c);
// }
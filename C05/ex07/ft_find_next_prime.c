/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gutinani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:18:19 by gutinani          #+#    #+#             */
/*   Updated: 2024/01/29 11:55:19 by gutinani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	unsigned int	d;

	d = 2;
	if (nb <= 1)
		return (0);
	if ((unsigned int) nb > 0)
	{
		while (d <= (unsigned int) nb / d)
		{
			if ((unsigned int) nb % d == 0)
			{
				return (0);
			}
			else
			{
				d++;
			}
		}
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (!(ft_is_prime(nb + i)))
		i++;
	return (nb + i);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_find_next_prime(2147483647));
}
*/

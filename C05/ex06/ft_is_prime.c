/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gutinani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:05:14 by gutinani          #+#    #+#             */
/*   Updated: 2024/01/29 11:00:33 by gutinani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
/*
int	main(void)
{
	printf("%d", ft_is_prime(-7));
}
*/

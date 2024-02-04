/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gutinani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:08:42 by gutinani          #+#    #+#             */
/*   Updated: 2024/01/24 19:31:34 by gutinani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	result ;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= 10)
			ft_putnbr(nb / 10);
		result = nb % 10 + '0';
		write(1, &result, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(123);
	return(0);
}
*/



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gutinani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 07:58:34 by gutinani          #+#    #+#             */
/*   Updated: 2024/01/29 20:46:43 by gutinani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	est;

	est = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (est * est <= nb && est <= 46340)
	{
		if ((est * est) == nb)
			return (est);
		est++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d",ft_sqrt(2147395600));
	return (0);
}
*/

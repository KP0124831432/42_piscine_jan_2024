/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gutinani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:38:08 by gutinani          #+#    #+#             */
/*   Updated: 2024/01/25 11:43:54 by gutinani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	result;

	i = 0;
	signal = 1;
	result = 0;
	while ((str[i] >= 7 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-') 
	{
		if (str[i] == '-') 
		{
			signal = -signal;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * signal);
}
/*
#include <stdio.h>
int main()
{
	char str[] = " 		 -+++++---+-+--445iai55aaaaa444";
	printf("%d", ft_atoi(str));
}
*/

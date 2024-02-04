/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gutinani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:25:03 by gutinani          #+#    #+#             */
/*   Updated: 2024/01/23 11:36:48 by gutinani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	int	di;
	int	si;

	di = 0;
	si = 0;
	while (dest[di] != '\0')
	{
		di++;
	}
	while (src[si] != '\0')
	{
		dest[di] = src[si];
		di++;
		si++;
	}
	dest[di] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str1[100] = "This is ", str2[] = "sparta";
	printf("%s", ft_strcat(str1, str2));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gutinani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:43:17 by gutinani          #+#    #+#             */
/*   Updated: 2024/01/23 20:15:49 by gutinani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	di;
	unsigned int	si;

	di = 0;
	si = 0;
	while (dest[di] != '\0')
	{
		di++;
	}
	while (src[si] != '\0' && si < nb)
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
	printf("%s", ft_strncat(str1, str2, 4));
	return (0);
}
*/

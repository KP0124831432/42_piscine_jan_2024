/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gutinani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:21:35 by gutinani          #+#    #+#             */
/*   Updated: 2024/01/24 19:46:39 by gutinani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	b;
	int	l;

	i = 0;
	b = 0;
	l = 0;
	if (str[i] == 0 && to_find[i] == 0)
		return (&str[i]);
	while (to_find[l] != '\0')
		l++;
	while (str[i])
	{
		while (str[i + b] == to_find[b] && to_find[b] != '\0')
			b++;
		if (b == l)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[100] = "papagaio", str2[] = "jiji";
	printf("FUNCTION FT_STRSTR :%s\n", ft_strstr(str1, str2));
        printf("FUNCTION ORIGINAL :%s\n", strstr(str1, str2));

	return (0);
}
*/

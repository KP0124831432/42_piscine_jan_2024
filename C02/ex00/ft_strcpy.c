/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gutinani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:35:18 by gutinani          #+#    #+#             */
/*   Updated: 2024/01/18 17:53:40 by gutinani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char ds[15];
	char sr[] = "Hellomyfriend";
	
	printf("TESTE %s\n", ft_strcpy(ds, sr));
	//ft_strcpy(ds,sr);
	//printf("%s\n", ds);
	return (0);
}
*/

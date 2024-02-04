/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gutinani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:38:31 by gutinani          #+#    #+#             */
/*   Updated: 2024/01/23 16:20:58 by gutinani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
/*
#include <stdio.h>
#include <string.h>
int	main() 
{
  char	str1[] = "abcdmmamam", str2[] = "abcuduaasdefghij" ;
  int	result;

  
  result = strncmp(str1, str2, 5);
  printf("strncmp(str1, str2) = %d\n", result);

  
  result = ft_strncmp(str1, str2, 5);
  printf("ft_strcmp(str1, str2) = %d\n", result);

  return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gutinani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:30:22 by gutinani          #+#    #+#             */
/*   Updated: 2024/01/22 19:55:11 by gutinani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main() {
  char	str1[] = "abcd", str2[] = "abCd" ;
  int	result;


  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);


  result = ft_strcmp(str1, str2);
  printf("ft_strcmp(str1, str2) = %d\n", result);

  return (0);
}
*/

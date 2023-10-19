/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:55:14 by skanna            #+#    #+#             */
/*   Updated: 2023/10/19 19:17:07 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && (s1[i]))
	{
		if (s1[i] == s2[i])
			i++;
		else 
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string1[] = "";
	char	string2[] = "abd1";
//	size_t	n = 4;

	printf("strncmp: %d\n", strncmp(string1, string2, 4));	
	printf("ft_strncmp: %d\n", ft_strncmp(string1, string2, 4));
	return(0);
}*/
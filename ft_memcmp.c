/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:35:04 by skanna            #+#    #+#             */
/*   Updated: 2023/10/20 12:42:28 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1)
	{
		if (((unsigned char*)s1)[i] == ((unsigned char*)s2)[i])
			i++;
		else
			return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
	}
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string1[] = "a5";
	char	string2[] = "abcd55";

	printf("memcmp: %d\n", memcmp(string1, string2, 2));	
	printf("ft_memcmp: %d\n", ft_memcmp(string1, string2, 2));
	return(0);
}*/
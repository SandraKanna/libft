/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:35:23 by skanna            #+#    #+#             */
/*   Updated: 2023/10/20 11:47:34 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char*)s)[i] != (char)c)
			i++;
		else
			return ((char*)(s + i));
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string[] = "kanna";
	size_t	n = 4;
	int	c = 'n';

	printf("memchr: %s\n", (char*)memchr(string, c, n));
	printf("ft_memchr: %s\n", (char*)ft_memchr(string, c, n));
}
*/


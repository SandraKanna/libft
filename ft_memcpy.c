/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:31:38 by event             #+#    #+#             */
/*   Updated: 2023/10/21 16:55:19 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)src)[i])
	{
		if (i < n)
			((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	src1[] = "hey you";
	char    src2[] = "hey you";
	char	dest1[] = "123";
	char    dest2[] = "123";
	size_t	n = 4;

	printf("dest1: %s, dest2: %s\n", dest1, dest2);
	printf("Real: %s\n", (char*)memcpy(dest1, src1, n));
	printf("new dest1: %s\n", dest1);
	printf("Mine: %s\n", (char*)ft_memcpy(dest2, src2, n));
	printf("new dest2: %s\n", dest2);

	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:15:16 by skanna            #+#    #+#             */
/*   Updated: 2023/10/23 11:33:34 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_items, size_t array_type_size)
{
	void	*ptr;
	
	ptr = malloc(n_items * array_type_size);
	if (ptr == NULL)
		return (NULL);
	else
		ft_memset(ptr, 0, n_items);
	return (ptr);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*str_mycalloc;
	char	*str_calloc;
	size_t	n_items = 10;
	size_t	type_size = sizeof(char);
	
	str_mycalloc = ft_calloc(n_items, type_size);
	str_calloc = calloc(n_items, type_size);
	printf("Test1: %d\n", ft_memcmp(str_mycalloc, str_calloc, n_items));
	printf("Test2: %d\n", memcmp(str_mycalloc, str_calloc, n_items));
	return (0);
}*/
	

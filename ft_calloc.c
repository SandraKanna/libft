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

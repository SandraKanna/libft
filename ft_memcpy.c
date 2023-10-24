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
	if (!((char *)src) && !((char *)dest))
		return (NULL);
	while (i < n)
	{	
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

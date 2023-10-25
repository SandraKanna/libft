/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:57:20 by skanna            #+#    #+#             */
/*   Updated: 2023/10/25 17:57:26 by skanna           ###   ########.fr       */
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

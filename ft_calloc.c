/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:49:45 by skanna            #+#    #+#             */
/*   Updated: 2023/11/02 14:40:56 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	multip;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	multip = nmemb * size;
	if (multip / nmemb != size)
		return (NULL);
	ptr = malloc(multip);
	if (ptr == NULL)
		return (NULL);
	else
		ft_memset(ptr, 0, multip);
	return (ptr);
}

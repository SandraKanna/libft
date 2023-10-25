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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	multip;
//check if empty string or type size 0
	if (nmemb == 0 || size == 0)
		return (malloc(0));
//check if overflow
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

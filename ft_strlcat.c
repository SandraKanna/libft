/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:00:35 by skanna            #+#    #+#             */
/*   Updated: 2023/10/25 18:00:46 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_s;
	size_t	len_d;
	size_t	i;
	char	*source;

	source = (char *)src;
	i = 0;
	len_s = ft_strlen(source);
	len_d = ft_strlen(dst);
	if (size == 0)
		return (len_s);
	if (size < len_d)
		return (len_s + size);
	while (len_d + i < size - 1 && source[i])
	{
		dst[len_d + i] = source[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}

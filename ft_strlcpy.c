/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:46:23 by skanna            #+#    #+#             */
/*   Updated: 2023/10/19 14:11:43 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size < len)
		return (len + (len - size));
	
	else
	{
		while (i < size - 1)
		{
			((char*)dst)[i] = ((char*)src)[i];
			i++;
		}
		((char*)dst)[i] = '\0';
		return (len);
	}
}

/*#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	source[] = "hola123";
	char	dest[] = "Oye";
	size_t	size = sizeof(dest);

//	printf ("Real: %ld\n", strlcpy(dest, source, size));
	printf ("mine: %ld\n", ft_strlcpy(dest, source, size));
	return (0);
}*/
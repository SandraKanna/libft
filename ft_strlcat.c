/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:16:38 by skanna            #+#    #+#             */
/*   Updated: 2023/10/20 16:18:06 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  len_src;
    size_t  len_dst;
    size_t  i;
    size_t  j;

    len_src = ft_strlen(src);
    len_dst = ft_strlen(dst);
    i = 0;
    j = 0;

    if (size <= len_dst)
        return (size + len_src);
    while ((i < size - 1) && src[j])
        dst[i++] = ((char*)src)[j++];
    dst[i] = '\0';
   return(i + j);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	source[] = " 123\0";
	char	dest1[50] = "Oye Hola\0";
    char    dest2[50] = "Oye Hola\0";

    printf ("strlcat: %ld\n", strlcat(dest1, source, 15));
	printf ("dest1: %s\n", dest1);
	printf ("ft_strlcat: %ld\n", ft_strlcat(dest2, source, 15));
	printf ("dest2: %s\n", dest2);
	return (0);
}
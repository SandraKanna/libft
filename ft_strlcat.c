/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:16:38 by skanna            #+#    #+#             */
/*   Updated: 2023/10/21 16:47:26 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	h;

	h = 0;
	if (str == NULL)
		return (0);
	while (str[h])
		h++;
	return (h);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] != (char)c)
			i++;
		else
			return ((char *)(s + i));
	}
	return (NULL);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;
	size_t	j;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	j = 0;
	if (size <= len_dst)
		return (size + len_src);
	while ((dst[i] != '\0') && i <= size - 1)
	{
		i++;
		size--;
	}
	while ((src[j] != '\0') && j <= size - 1)
	{
		dst[i++] = src[j++];
		size--;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	source[] = "cat\0";
	char	dest1[10];
    char    dest2[10];
    size_t  size = sizeof(dest2);

    printf ("dest1 before: %s\n", dest1);
	printf ("strlcat: %ld\n", strlcat(dest1, source, size));
	printf ("dest1 after real function: %s\n", dest1);
	printf("\n");
	printf ("dest2 before: %s\n", dest2);
	printf ("ft_strlcat: %ld\n", ft_strlcat(dest2, source, size));
	printf ("dest2 after my function: %s\n", dest2);
	return (0);
}

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
/*
size_t	ft_strlen(const char *str)
{
	int	h;

	h = 0;
	if (str == NULL)
		return (0);
	while (str[h])
		h++;
	return (h);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_s;
	size_t	len_d;
	size_t	i;
	char	*destination;
	char	*source;

	destination = dst;
	source = (char *)src;
	i = 0;
	len_s = ft_strlen(source);
	len_d = ft_strlen(destination);
	if (size < len_d)
		return(len_s + size);
	while (len_d + i < size - 1 && source[i])
	{
		destination[len_d + i] = source[i];
		i++;
	}
	destination[len_d + i] = '\0';
	return (len_d + len_s);
}
/*
#include <stdio.h>
#include <bsd/string.h>
#include <assert.h>

int	main(void)
{
	char	source1[] = "abcdefghi";
	char	source2[] = "abcdefghi";
	char	*dest1[20] = "1234";
    char    *dest2[20] = "1234";
    size_t  size = 8;

    printf ("dest1 before: %s\n", dest1);
	printf ("strlcat: %ld\n", strlcat(dest1, source1, size));
	printf ("dest1 after real function: %s\n", dest1);
	printf("\n");

	printf ("dest2 before: %s\n", dest2);
	printf ("ft_strlcat: %ld\n", ft_strlcat(dest2, source2, size));
	printf ("dest2 after my function: %s\n", dest2);

	return (0);
}

{
	size_t	len_src;
	size_t	len_dst;
	char	*ptr_0_dst;
	char	*source;

	len_src = ft_strlen(src);
	source = (char *)src;
	ptr_0_dst = ft_memchr(dst, '\0', size);
	if (ptr_0_dst == NULL)
	//si memchr ne trouve pas de '\0' => size > len_dst
		return (len_src + size);
	len_dst = (ptr_0_dst - dst);
		//ptr_0_dst - dst = end - start = longuer 
	while (( len_dst < size - 1) && (*source != '\0'))
	{
		*ptr_0_dst = *source;
		ptr_0_dst++;
		source++;
	}
	*ptr_0_dst = '\0';
	return (len_dst + len_src);
}
*/
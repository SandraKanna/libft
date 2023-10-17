/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:31:38 by event             #+#    #+#             */
/*   Updated: 2023/10/17 19:31:46 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t	i;

    i = 0;
    while (((char*)src)[i])
    {
        if (i < n)
            ((char*)dest)[i] = ((char*)src)[i];
        i++;
    }
    return (dest);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char	src[] = "-Hello World";
    char	dest[50];
    size_t	n = 5;

    printf("Real: %s\n", memcpy(dest, src, n));
    printf("Mine: %s", ft_memcpy(dest, src, n));
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:18:25 by skanna            #+#    #+#             */
/*   Updated: 2023/10/18 16:19:56 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    size_t	i;
    
    i = 0;
    if (src < dest)
    {
        i = n;
        while (i > 0)
        {
            i--;
            ((char*)dest)[i] = ((char*)src)[i];
        }
    }
    else
    {
        while (i < n)
        {
            ((char*)dest)[i] = ((char*)src)[i];
            i++;
        }
    }
    return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char	src[] = "hel";
    char	dest[] = "you hoo ";
    size_t	n = 5;

    printf("Real: %s\n", (char*)memmove(dest, src, n));
    printf("Mine: %s\n", (char*)ft_memmove(dest, src, n));
    return (0);
}*/
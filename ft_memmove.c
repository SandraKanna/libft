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
    char	*temp;

    temp = NULL;
    i = 0;

    if (((char*)src)[i] != '\0')
    {
        while (i < n)  
        {
            temp[i] = ((char*)src)[i];
            ((char*)dest)[i] = temp[i];
            i++;
        }
        return(dest);
    }
    return (0);
}


#include <stdio.h>
#include <string.h>

int main(void)
{
    char	src[] = "heydfhsfhgrjhdghjfgjhghjgh";
    char	dest[] = "1234567891011";
    size_t	n = 2;

    printf("Real: %s\n", (char*)memmove(dest, src, n));
    printf("Mine: %s\n", (char*)ft_memmove(dest, src, n));
    return (0);
}
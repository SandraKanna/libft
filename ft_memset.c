/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:41:07 by event             #+#    #+#             */
/*   Updated: 2023/10/17 18:41:13 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
    size_t	i;

    i = 0;
    while (((char*)str)[i])
    {
        if (i < n)
            ((char*)str)[i] = c;
        i++;
    }
    return (str);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char	string[] = "Hello World";
    int	c = 48;
    size_t	n = 20;

    printf("Real: %s\n", (char*)memset(string, c, n));
    printf("Mine: %s", (char*)ft_memset(string, c, n));
    return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:46:57 by event             #+#    #+#             */
/*   Updated: 2023/10/17 19:47:02 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
    size_t	i;

    i = 0;
    while (((char*)str)[i])
    {
        if (i < n)
            ((char*)str)[i] = '\0';
        i++;
    }
}

#include <stdio.h>
#include <strings.h>
#include <unistd.h>
int main(void)
{
    char	str1[] = "Hello World";
    char	str2[] = "Hello World";
    size_t	n = 1;

    bzero(str1, n);
    printf("Real: %s\n", str1);
    printf("\n");
    ft_bzero(str2, n);
    printf("Mine: %s\n", str2);
    return (0);
}
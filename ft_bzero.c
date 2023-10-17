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

#include <stddef.h>

void    ft_bzero(void *str, size_t n)
{
    size_t  i;

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

int main(void)
{
    char	string[] = "Hello World";
    size_t	n = 5;

    printf("Real: %s\n", bzero(string, n));
    printf("Mine: %s", ft_bzero(string, n));
    return (0);
}
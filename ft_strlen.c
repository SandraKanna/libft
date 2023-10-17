/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:16:59 by event             #+#    #+#             */
/*   Updated: 2023/10/17 18:33:02 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char	string[] = "Hello ";

	printf("Real: %zu\n", strlen(string));
	printf("Mine: %zu", ft_strlen(string));
	return (0);
}*/
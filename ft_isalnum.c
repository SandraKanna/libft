/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:13:42 by event             #+#    #+#             */
/*   Updated: 2023/10/17 17:01:21 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char	c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char	c = '-';

	printf("Real: %d\n", isalnum(c));
	printf("Mine: %d", ft_isalnum(c));
	return (0);
}*/

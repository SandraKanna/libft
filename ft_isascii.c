/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:25:22 by event             #+#    #+#             */
/*   Updated: 2023/10/17 16:59:07 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int d)
{
	if (d >= 0 && d <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	d = -5;

	printf("Real: %d\n", isascii(d));
	printf("Mine: %d\n", ft_isascii(d));
	return (0);
}*/

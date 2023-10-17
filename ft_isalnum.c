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

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 97 && c <= 122)
			|| (c >= 65 && c <= 90))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int	alphanum = 57;

	printf("Real: %d\n", isalnum(alphanum));
	printf("Mine: %d", ft_isalnum(alphanum));
	return (0);
}/*
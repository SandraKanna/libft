/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:01:08 by skanna            #+#    #+#             */
/*   Updated: 2023/10/19 16:14:14 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c + 32);
	}	
	else
		return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c = 98;

	printf("toupper: %c\n", toupper(c));
	printf("ft_toupper: %c\n", ft_toupper(c));
	return(0);
}
*/
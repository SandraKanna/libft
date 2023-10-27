/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:51:10 by skanna            #+#    #+#             */
/*   Updated: 2023/10/26 21:16:42 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	sign(long int n)
{
	if (n < 0)
		return (-1);
	else
		return (1);
}

static int	length(long int n)
{
	int	i;
	int	sign;

	i = 1;
	sign = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = n * -1;
		sign = 1;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (sign + i);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	int			len;
	char		*str;
	int			i;

	nbr = n;
	i = 0;
	len = length(nbr);
	str = malloc ((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nbr < 0)
		str[i++] = 45;
	nbr = nbr * sign(nbr);
	str[len] = '\0';
	if (nbr < 10)
		str[i] = nbr + 48;
	while (nbr > 0 && len > 0)
	{
		str[--len] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	return (str);
}

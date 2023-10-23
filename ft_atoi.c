/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:26:25 by skanna            #+#    #+#             */
/*   Updated: 2023/10/20 15:58:06 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i])
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == 45)
			sign = sign * -1;
		if (str[i] == 43 || str[i] == 45)
			i++;
		if (str[i] >= 48 && str[i] <= 57)
			num = (num * 10) + (str[i++] - 48);
		else
			return (0);
	}
	num = num * sign;
	return (num);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*string = "    \n	-88";
	
	printf("atoi: %d\n", atoi(string));
	printf("ft_atoi: %d\n", ft_atoi(string));
	return (0);
}*/
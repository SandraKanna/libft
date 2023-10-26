/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:30:32 by skanna            #+#    #+#             */
/*   Updated: 2023/10/26 20:30:44 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long int	nbr;
	char		c;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = nbr * -1;
	}

	if (nbr < 10)
	{
		c = nbr + 48;
		ft_putchar_fd(c, fd);
	}
	else
	{
	 	ft_putnbr_fd((nbr / 10), fd);
	 	ft_putchar_fd((nbr % 10 + 48), fd);		
	}
	// if (nbr > 9)
	// {
	// 	ft_putnbr_fd((nbr / 10), fd);
	// 	ft_putnbr_fd((nbr % 10), fd);
	// }
	// c = (nbr % 10) - 48;
	// ft_putchar_fd(c, fd);
}
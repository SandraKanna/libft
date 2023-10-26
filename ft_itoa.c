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

char *ft_itoa(int n)
{
    long int    nbr;
    int        sign;
    char       *str;
    int         i;
    
    nbr = n;
    sign = 1;
    str = malloc (ft_strlen(ft_itoa(n)) + 1 + sizeof(char));
    if (!str)
        return (NULL);
    if (nbr < 0)
    {
        sign = sign * -1;
        nbr = nbr * -1;
    }
    // if (nbr > 9)
    // {
    //     nbr
    // }
	if (nbr < 10)
		str[i] = nbr + 48;
	else
	{
	 	ft_itoa(nbr / 10);
	 	ft_itoa(str[i] = nbr % 10 + 48);		
	}
    return (str);
}
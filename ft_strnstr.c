/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:01:50 by skanna            #+#    #+#             */
/*   Updated: 2023/10/25 18:01:53 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little)
		return ((char *)big);
	while ((j < len) && (little[i]) && (big[j]))
	{
		if (little[i] == big[j])
		{
			i++;
			j++;
		}
		else
			j++;
	}
	if (little[i] == '\0')
		return ((char *)big + (j - i));
	else
		return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>
//gcc -Wall -Wextra -Werror ft_strnstr.c -lbsd
int	main(void)
{
	char *bigstr = "";
	char	*smallstr = "Bac";
	size_t	len = 7;
	
	printf("strnstr: %s\n", strnstr(bigstr, smallstr, len));
	printf("ft_strnstr: %s\n", ft_strnstr(bigstr, smallstr, len));

	return (0);
}
*/

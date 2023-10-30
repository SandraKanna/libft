/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:01:50 by skanna            #+#    #+#             */
/*   Updated: 2023/10/25 20:52:04 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while ((j + i) < len && (little[i]) && (big[j]))
	{
		if (little[i] == big[j + i])
			i++;
		else
		{
			i = 0;
			j++;
		}
	}
	if (little[i] == '\0')
		return ((char *)big + j);
	else
		return (NULL);
}

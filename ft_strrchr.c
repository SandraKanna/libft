/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:58:50 by skanna            #+#    #+#             */
/*   Updated: 2023/10/21 16:39:51 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	size;

	size = ft_strlen(str);
	if (!*str)
		return (NULL);
	else
	{
		while (size > 0)
		{
			if (((char *)str)[size] == (char)c)
				return ((char *)(str + size));
			size--;
		}
	}
	return (NULL);
}

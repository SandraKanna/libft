/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:02:03 by skanna            #+#    #+#             */
/*   Updated: 2023/10/25 18:02:06 by skanna           ###   ########.fr       */
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

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

/*size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

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
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	string[] = "abcdbe";
	int	c = 'z';

	printf("strrchr: %s\n", (char*)strrchr(string, c));
	printf("ft_strrchr: %s\n", (char*)ft_strrchr(string, c));
	return (0);
}*/

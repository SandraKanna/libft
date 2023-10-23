/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:05:49 by skanna            #+#    #+#             */
/*   Updated: 2023/10/23 13:47:32 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	i = start;
	j = 0;
	substr = malloc(len * sizeof(char));
	if (substr == NULL || start > len)
	{
		free(substr);
		return (NULL);
	}
	while (s[i] && j < len)
		substr[j++] = s[i++];
	substr[j] = '\0';
	return (substr);
}

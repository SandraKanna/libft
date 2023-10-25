/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:02:20 by skanna            #+#    #+#             */
/*   Updated: 2023/10/25 18:02:26 by skanna           ###   ########.fr       */
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

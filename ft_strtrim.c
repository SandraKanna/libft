/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:02:11 by skanna            #+#    #+#             */
/*   Updated: 2023/10/25 18:02:14 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*ft_vide(void)
{
	char	*str;

	str = malloc(1);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*s1_trimmed;
	size_t		start;
	size_t		end;
	size_t		i;

	i = 0;
	start = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == ft_strlen(s1))
		return (ft_vide());
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	s1_trimmed = malloc((end - start + 2) * sizeof(char));
	if (s1_trimmed == NULL)
		return (NULL);
	while (start <= end)
		s1_trimmed[i++] = s1[start++];
	s1_trimmed[i] = '\0';
	return (s1_trimmed);
}

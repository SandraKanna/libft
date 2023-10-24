/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:41:56 by skanna            #+#    #+#             */
/*   Updated: 2023/10/24 11:12:22 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_trimmed;
	int		i;
	int		j;
	int		len_s1;
	int		len_set;

	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	s1_trimmed = malloc((len_s1 + 1) * sizeof(char));
	if (s1_trimmed == NULL)
		return (NULL);
	while (s1[i])
	{
		while (set[i] && s1[i] == set[i])
			i++;
		while (i < (len_s1 - len_set + 1))
		{
			s1_trimmed[j] = s1[i];
			j++;
			i++;
		}
	}
	s1_trimmed[j] = '\0';
	return (s1_trimmed);
}


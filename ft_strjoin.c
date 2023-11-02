/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:00:10 by skanna            #+#    #+#             */
/*   Updated: 2023/10/25 18:00:13 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 ||!s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	joint = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (joint == NULL)
		return (NULL);
	while (s1[j])
		joint [i++] = ((char *)s1)[j++];
	j = 0;
	while (s2[j])
		joint[i++] = ((char *)s2)[j++];
	joint[i] = '\0';
	return (joint);
}

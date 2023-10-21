/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:02:12 by skanna            #+#    #+#             */
/*   Updated: 2023/10/21 16:48:27 by skanna           ###   ########.fr       */
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

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len_s;
	size_t	i;

	i = 0;
	len_s = ft_strlen(s);
	dup = malloc((len_s + 1) * sizeof(const char));
	if (dup == NULL)
		return (NULL);
	while (s[i])
	{
		dup[i] = ((char *)s)[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*string = "123- pp \0../\n asdsd";
	char	*res1 = strdup(string);
	char	*res2 = ft_strdup(string);

	printf("strdup: %s\n", res1);
	free(res1);
	printf("ft_strdup: %s\n", res2);
	free(res2);
	return(0);
}*/

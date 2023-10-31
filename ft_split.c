/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:37:04 by skanna            #+#    #+#             */
/*   Updated: 2023/10/26 19:24:00 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int  count_args(char const *s, char c)
{
	size_t  i;
	size_t  args;

	i = 0;
	args = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			args++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	if (args == 0)
		return (0);
	return (args);
}
static char	**free_split(char **split, int h)	
{
	int	i;

	i = 0;
	while (i < h)
	{
		free (split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static char	**fill_args(char **split, char const *s, size_t args, char c)
{	
	size_t			h;
	size_t			len_args;

	h = 0;
	while (s && h < args)
	{
		len_args = 0;
		while (*s == c)
			s++;
		while (*s != '\0' && *s != c)
		{
			len_args++;
			s++;
		}
		split[h] = ft_substr((s - len_args), 0, len_args);
		if (!split[h])
		{
			free_split(split, h);
			return (NULL);
		}
		h++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	args;
	char	**split;
	
	if (!s)
		return (NULL);
	args = count_args(s, c);
	split = malloc ((args + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split[args] = 0;
	split = fill_args(split, s, args, c);
	return (split);
}

/*int main(void)
{
		char *s = "tripouille";
	char c = 32;
	char **split;
	int	i;
	// int words = 3;

	i = 0;
	printf("ft_split\n");
	printf("String to be copied: %s\n", s);
	split = ft_split(s, c);
	while (split[i])
	{	
		printf("String %d: |%s|\n", i, split[i]);
		i++;
		printf("\n");
	}
	free (split);
	printf("\n");
	return(0);
}*/

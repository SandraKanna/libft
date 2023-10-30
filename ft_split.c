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

static void	free_split(char **split, size_t args)	
{
	while (args >= 0)
	{
		free (split[args]);
		args--;
	}
}

static char	**fill_args(char **split, char const *s, char c)
{	
	size_t			i;
	size_t			h;
	size_t			args;
	size_t			len_args;
	unsigned int	start;

	i = 0;
	h = 0;
	start = 0;
	args = count_args(s, c);
	while (s[i] && h < args)
	{
		len_args = 0;
		if (s[i] == c)
			i++;
		while (s[i] != c)
		{
			len_args++;
			i++;
		}
		split[h] = ft_substr((s + start), 0, (len_args + 1));
		if (!split[h])
			return (NULL);
		start = start + i;
		h++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	h;
	size_t	args;
	char	**split;
	// void	*ptr;

	// ptr = 0;
	h = 0;
	i = 0;
	args = count_args(s, c);
	if (!s)
		return (NULL);
	split = malloc ((args + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split[args] = 0;
	split = fill_args(split, s, c);
	return (split);
}

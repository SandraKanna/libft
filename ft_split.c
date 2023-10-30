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

static int  n_words(char const *s, char c)
{
	size_t  i;
	size_t  words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	if (words == 0)
		return (0);
	return (words);
}

char	**ft_split(char const *s, char c)
{

}


int main(void)
{
  char *str = "hola que tal";
  char c = 32;
  
  printf("words count: %d\n", n_words(str, c));
  return(0);
}
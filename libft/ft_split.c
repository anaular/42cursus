/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaular <anaular@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:00:41 by anaular           #+#    #+#             */
/*   Updated: 2023/10/20 22:45:21 by anaular          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_countw(char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if ((*str != c && trigger == 0))
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}	

static char	**ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}

static int	wordalloc(char **tab, char *str, char c)
{
	int	i;
	int	j;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			j = 0;
			while ((str[i + j] != c) && (str[i + j]))
				j++;
			tab[words] = ft_substr(str, i, j);
			if (tab[words] == 0)
				return (ft_free(tab), 0);
			i = i + j;
			words++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (0);
	split = ft_calloc(ft_countw((char *)s, c) + 1, sizeof(char *));
	if (!split)
		return (0);
	if (!wordalloc(split, (char *)s, c))
		return (0);
	return (split);
}

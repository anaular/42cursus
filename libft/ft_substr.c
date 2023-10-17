/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaular <anaular@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:59:52 by anaular           #+#    #+#             */
/*   Updated: 2023/09/27 15:49:00 by anaular          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	a;
	unsigned int	b;
	char			*str;

	if (!s)
		return (0);
	a = 0;
	b = 0;
	while (s[a] && a < start)
		a++;
	while (s[a] && b < len)
	{
		a++;
		b++;
	}
	str = (char *)malloc(b * sizeof(char) + 1);
	if (!str)
		return (0);
	a = 0;
	while (a < b)
	{
		str[a] = s[start + a];
		a++;
	}
	return (str[a] = '\0', str);
}

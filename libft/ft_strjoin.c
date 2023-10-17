/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaular <anaular@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:25:30 by anaular           #+#    #+#             */
/*   Updated: 2023/10/17 19:59:14 by anaular          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	if (s1 && s2)
	{
		str = (char *)malloc(sizeof(char)
				* (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (str == 0)
			return (0);
		i = 0;
		j = 0;
		while (s1[i] != '\0')
			str[i++] = s1[j++];
		j = 0;
		while (s2[j] != '\0')
		{	
			str[i + j] = s2[j];
			j++;
		}
		str[i + j] = '\0';
		return (str);
	}
	return (0);
}

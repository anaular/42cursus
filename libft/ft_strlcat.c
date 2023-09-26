/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaular <anaular@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:07:23 by anaular           #+#    #+#             */
/*   Updated: 2023/09/24 12:39:25 by anaular          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	s = 0;
	while (src[s] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[s];
		i++;
		s++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[s]));
}

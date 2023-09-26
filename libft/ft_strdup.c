/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaular <anaular@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:37:51 by anaular           #+#    #+#             */
/*   Updated: 2023/09/25 21:55:13 by anaular          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*m;

	m = (char *)malloc(ft_strlen(s) + 1);
	if (!m)
		return (0);
	ft_memcpy(m, s, ft_strlen(s) + 1);
	return (m);
}

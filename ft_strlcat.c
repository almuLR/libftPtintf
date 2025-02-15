/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almudenalopezrodriguez <almudenalopezro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:25:09 by almlopez          #+#    #+#             */
/*   Updated: 2025/01/26 16:46:48 by almudenalop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	m;
	size_t	n;
	size_t	i;

	m = ft_strlen(dst);
	n = ft_strlen(src);
	i = 0;
	if (size <= m)
		return (n + size);
	while (src[i] != '\0' && (m + i) < (size - 1))
	{
		dst[m + i] = src[i];
		i++;
	}
	dst[m + i] = '\0';
	return (m + n);
}

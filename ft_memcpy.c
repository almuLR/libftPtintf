/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:19:59 by almudenalop       #+#    #+#             */
/*   Updated: 2025/02/02 14:55:53 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char		*aux;
	size_t				i;
	const unsigned char	*aux2;

	if (!dst && !src)
		return (0);
	aux = (unsigned char *restrict)dst;
	aux2 = (void *restrict)src;
	i = 0;
	while (i < n)
	{
		aux[i] = aux2[i];
		i++;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almudenalopezrodriguez <almudenalopezro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:02:56 by almudenalop       #+#    #+#             */
/*   Updated: 2025/01/28 19:29:14 by almudenalop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_backward(unsigned char *dst, const unsigned char *src,
size_t len)
{
	while (len > 0)
	{
		len--;
		dst[len] = src[len];
	}
}

static void	copy_forward(unsigned char *dst,
const unsigned char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*aux;
	const unsigned char	*aux2;

	aux = (unsigned char *)dst;
	aux2 = (const unsigned char *)src;
	if (aux == aux2 || len == 0)
		return (dst);
	if (aux > aux2)
		copy_backward(aux, aux2, len);
	else
		copy_forward(aux, aux2, len);
	return (dst);
}

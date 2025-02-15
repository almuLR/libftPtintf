/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almudenalopezrodriguez <almudenalopezro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:15:43 by almudenalop       #+#    #+#             */
/*   Updated: 2025/01/28 19:24:35 by almudenalop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*aux;
	size_t			i;

	aux = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		aux[i] = 0;
		i++;
	}
}

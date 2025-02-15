/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:52:51 by almudenalop       #+#    #+#             */
/*   Updated: 2025/02/02 15:21:38 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	n;
	void	*aux;

	if (count != 0 && size != 0 && count > SIZE_MAX / size)
		return (NULL);
	n = count * size;
	aux = malloc(n);
	if (aux != NULL)
	{
		ft_memset(aux, 0, n);
		return (aux);
	}
	return (NULL);
}

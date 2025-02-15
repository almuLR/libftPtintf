/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almudenalopezrodriguez <almudenalopezro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:27:44 by almudenalop       #+#    #+#             */
/*   Updated: 2025/02/01 17:29:48 by almudenalop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_empty_substr(void)
{
	char	*aux;

	aux = malloc(1);
	if (aux)
		aux[0] = '\0';
	return (aux);
}

static char	*ft_copy_substr(const char *s, unsigned int start, size_t len)
{
	char	*aux;
	size_t	i;

	aux = malloc(len + 1);
	if (!aux)
		return (NULL);
	i = 0;
	while (i < len)
	{
		aux[i] = s[start + i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;

	if (!s)
		return (NULL);
	if (len == 0)
		return (ft_empty_substr());
	size = ft_strlen(s);
	if (start >= size)
		return (ft_empty_substr());
	if (len > size - start)
		len = size - start;
	return (ft_copy_substr(s, start, len));
}

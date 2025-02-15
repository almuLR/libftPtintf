/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almudenalopezrodriguez <almudenalopezro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:28:09 by almudenalop       #+#    #+#             */
/*   Updated: 2025/01/31 11:41:54 by almudenalop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_total_size(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return (0);
	return (ft_strlen(s1) + ft_strlen(s2) + 1);
}

static void	copy_strings(char *aux, const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] != '\0')
	{
		aux[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		aux[i + j] = s2[j];
		j++;
	}
	aux[i + j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*aux;
	size_t	size;

	size = get_total_size(s1, s2);
	if (size == 0)
		return (NULL);
	aux = malloc(size * sizeof(char));
	if (!aux)
		return (NULL);
	copy_strings(aux, s1, s2);
	return (aux);
}

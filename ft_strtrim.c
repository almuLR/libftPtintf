/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almudenalopezrodriguez <almudenalopezro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:30:25 by almudenalop       #+#    #+#             */
/*   Updated: 2025/02/01 18:25:12 by almudenalop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_set(char c, char const *set)
{
	int	n;

	n = 0;
	while (set[n] != '\0')
	{
		if (set[n] == c)
			return (1);
		n++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	if (!set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_is_set(s1[i], set))
		i++;
	j = ft_strlen(s1);
	if (j == 0 || i == j)
		return (ft_substr(s1, 0, 0));
	j--;
	while (j > i && ft_is_set(s1[j], set))
		j = j - 1;
	return (ft_substr(s1, i, j - i + 1));
}

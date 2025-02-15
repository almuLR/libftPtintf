/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:26:55 by almlopez          #+#    #+#             */
/*   Updated: 2025/02/09 11:18:08 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_number(int n)
{
	int	l;

	l = 0;
	if (n < 0)
	{
		n *= -1;
		l++;
	}
	if (n == 0)
		l++;
	while (n > 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	aux;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	aux = n;
	i = size_number(n);
	result = (char *)malloc((i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[i--] = '\0';
	if (aux == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		aux *= -1;
	}
	while (aux > 0)
	{
		result[i--] = (aux % 10) + '0';
		aux = aux / 10;
	}
	return (result);
}

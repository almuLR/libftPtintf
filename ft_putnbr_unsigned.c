/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:50:17 by almlopez          #+#    #+#             */
/*   Updated: 2025/02/09 12:15:20 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	reverse(char *result, int size)
{
	int		i;
	int		j;
	char	aux;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		aux = result[i];
		result[i] = result[j];
		result[j] = aux;
		i++;
		j--;
	}
}

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_putnbr_base_valid(char *base)
{
	int	size;

	size = 0;
	while (base[size] != '\0')
	{
		size++;
	}
	if (size < 2 || !is_base_valid(base))
	{
		return (0);
	}
	return (1);
}

void	ft_convert_to_base(long naux, char *base, int size, char *result)
{
	int	n;

	n = 0;
	if (naux == 0)
	{
		result[n++] = base[0];
	}
	else
	{
		while (naux > 0)
		{
			result[n++] = base[naux % size];
			naux = naux / size;
			
		}
	}
	result[n] = '\0';
	reverse(result, n);
}

int	ft_putnbr_unsigned(unsigned int nbr, char *base)
{
	int		size;
	int		n;
	long	naux;
	char	result[1000];

	size = 0;
	n = 0;
	while (base[size] != '\0')
	{
		size++;
	}
	if (!ft_putnbr_base_valid(base))
	{
		return (0);
	}
	naux = nbr;
	ft_convert_to_base(naux, base, size, result);
	while (result[n] != '\0')
		n++;
	write(1, result, n);
	return(n);
}
/*int main()
{
    ft_putnbr_base(255, "0123456789ABCDEF");  // Imprime "FF" en hexadecimal
    write(1, "\n", 1);
    ft_putnbr_base(-42, "01");  // Imprime "-101010" en binario
    write(1, "\n", 1);
    ft_putnbr_base(123, "01234567");  // Imprime "173" en octal
    write(1, "\n", 1);
    ft_putnbr_base(255, "0123456789");  // Imprime "255" en decimal
    write(1, "\n", 1);
    return 0;
}*/

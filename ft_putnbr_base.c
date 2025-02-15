/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:50:17 by almlopez          #+#    #+#             */
/*   Updated: 2025/02/15 18:33:22 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	reverse_base(char *result, int size)
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

static int	is_base_valid_base(char *base)
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

static int	ft_putnbr_base_valid_base(char *base)
{
	int	size;

	size = 0;
	while (base[size] != '\0')
	{
		size++;
	}
	if (size < 2 || !is_base_valid_base(base))
	{
		return (0);
	}
	return (1);
}

static void	ft_convert_to_base_base(unsigned long naux, char *base, int size, char *result)
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
	reverse_base(result, n);
}

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int		size;
	int		n;
	char	result[1000];

	size = 0;
	n = 0;
	while (base[size] != '\0')
		size++;
	if (!ft_putnbr_base_valid_base(base))
		return (0);
	if (nbr == 0)
	{
		write(1, "0", 1);
		return(1);
	}
	ft_convert_to_base_base(nbr, base, size, result);
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

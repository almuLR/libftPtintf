/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:29:26 by almudenalop       #+#    #+#             */
/*   Updated: 2025/02/15 16:14:49 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	src[11];
	int	l;
	long	num;

	i = 0;
	l = 0;
	num = n;
	if ( n == 0)
	{
		write(fd, "0", 1);
		return (1);
	}
	if (num < 0)
	{
		write(fd, "-", 1);
		num *= -1;
		l++;
	}
	while (num > 0)
	{
		src[i++] = (num % 10) + '0';
		num = num / 10;
	}
	l *= i;
	while (--i >= 0)
		write(fd, &src[i], 1);
	return (l);
}

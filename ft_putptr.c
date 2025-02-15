/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:10:47 by almlopez          #+#    #+#             */
/*   Updated: 2025/02/15 15:40:12 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# define H_LOW "0123456789abcdef"

int	ft_putptr(void *ptr, int fd)
{
	unsigned long	address;
	int		i;

	address = (unsigned long)ptr;
	if(!ptr)
		return (write(fd, "(nil)", 5));
	i = write(fd, "0x", 2);
	i += ft_putnbr_base(address, H_LOW);
	return (i);
}
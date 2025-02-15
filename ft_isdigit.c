/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:45:39 by almlopez          #+#    #+#             */
/*   Updated: 2025/01/24 10:57:40 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>
int main()
{

     
	printf("src: %d\n", ft_isdigit(0));
	printf("src: %d\n", isdigit(0));
	printf("src: %d\n", ft_isdigit('a'));
	printf("src: %d\n", isdigit(12));
	printf("src: %d\n", ft_isdigit(00));
	printf("src: %d\n", isdigit(00));
	printf("src: %d\n", ft_isdigit(8));
	printf("src: %d\n", isdigit(8));
	printf("src: %d\n", ft_isdigit('8'));
	printf("src: %d\n", isdigit('8'));
	
    return (0) ;
}*/
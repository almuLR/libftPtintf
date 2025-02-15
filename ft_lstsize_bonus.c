/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almudenalopezrodriguez <almudenalopezro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:36:02 by almudenalop       #+#    #+#             */
/*   Updated: 2025/02/03 17:26:59 by almudenalop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		n;
	t_list	*aux;

	if (lst == NULL)
		return (0);
	n = 0;
	aux = lst;
	while (aux != NULL)
	{
		n++;
		aux = aux->next;
	}
	return (n);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almudenalopezrodriguez <almudenalopezro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:19:00 by almudenalop       #+#    #+#             */
/*   Updated: 2025/02/03 18:44:31 by almudenalop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*aux;
	void	*new_content;

	result = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
			return (ft_lstclear(&result, del), NULL);
		aux = ft_lstnew(new_content);
		if (!aux)
			return (del(new_content), ft_lstclear(&result, del), NULL);
		ft_lstadd_back(&result, aux);
		lst = lst->next;
	}
	return (result);
}

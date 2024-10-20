/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:16:34 by togomez           #+#    #+#             */
/*   Updated: 2024/10/19 17:16:35 by togomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*save;
	t_list	*newlist;

	if (!lst || !f || !del)
		return (NULL);
	newlist = ft_lstnew(f(lst->content));
	if (!newlist)
		return (NULL);
	save = newlist;
	lst = lst->next;
	while (lst)
	{
		newlist->next = ft_lstnew(f(lst->content));
		if (!newlist->next)
		{
			ft_lstclear(&save, del);
			return (NULL);
		}
		newlist = newlist->next;
		lst = lst->next;
	}
	newlist->next = NULL;
	return (save);
}

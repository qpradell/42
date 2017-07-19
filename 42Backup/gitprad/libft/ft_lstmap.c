/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:49:15 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/21 17:08:23 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *first;
	t_list *new;

	if (!lst || !f)
		return (NULL);
	new = f(lst);
	first = ft_lstnew(new->content, new->content_size);
	list = first;
	lst = lst->next;
	while (lst)
	{
		new = f(lst);
		list->next = ft_lstnew(new->content, new->content_size);
		list = list->next;
		lst = lst->next;
	}
	return (first);
}

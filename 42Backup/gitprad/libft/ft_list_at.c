/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:25:00 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/24 15:25:36 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int		i;
	t_list				*p;

	p = 0;
	if (begin_list == 0)
		return (p);
	i = 0;
	p = begin_list;
	while (i < nbr)
	{
		p = p->next;
		if (p == 0)
			return (p);
		i++;
	}
	return (p);
}

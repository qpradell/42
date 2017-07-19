/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:20:05 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/24 15:21:59 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *prev;
	t_list *actu;
	t_list *suiv;

	actu = *begin_list;
	prev = 0;
	while (actu)
	{
		suiv = actu->next;
		actu->next = prev;
		prev = actu;
		actu = suiv;
	}
	*begin_list = prev;
}

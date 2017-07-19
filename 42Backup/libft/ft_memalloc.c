/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:01:28 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/14 13:29:58 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *fresh;

	fresh = NULL;
	if (size)
	{
		fresh = (void *)malloc(size * sizeof(void *));
		if (fresh == NULL)
			return (NULL);
		else
			ft_bzero(fresh, size);
	}
	return ((void *)fresh);
}

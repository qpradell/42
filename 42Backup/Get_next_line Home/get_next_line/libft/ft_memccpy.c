/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:10:35 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/24 12:34:00 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	const char		*s;
	char			*d;
	char			*p;

	i = 0;
	s = src;
	d = dst;
	p = NULL;
	if (dst == src || n == 0)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (char)c)
			return (&d[i + 1]);
		i++;
	}
	return (p);
}

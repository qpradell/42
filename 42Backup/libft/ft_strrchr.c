/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:21:33 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/18 09:17:24 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(char *s, int c)
{
	size_t i;

	i = 0;
	if (s[i])
	{
		while (s[i])
			i++;
	}
	if (c == '\0')
		return (&s[i]);
	i--;
	while (s[i] && s[i] != (const char)c)
		i--;
	if (s[i] == (const char)c)
		return (char *)(&(s[i]));
	return (0);
}

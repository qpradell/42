/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:26:14 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/15 18:30:08 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*fresh;

	i = 0;
	fresh = NULL;
	if (s)
	{
		fresh = (char *)malloc(sizeof(char) * len + 1);
		if (fresh == NULL)
			return (NULL);
		while (len > 0)
		{
			fresh[i] = s[start];
			i++;
			start++;
			len--;
		}
		fresh[i] = '\0';
	}
	return (fresh);
}

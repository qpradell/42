/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:10:51 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/21 17:17:01 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*fresh;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	j = ft_strlen(s1) + ft_strlen(s2);
	fresh = NULL;
	fresh = (char *)malloc(sizeof(char) * j + 1);
	if (fresh == NULL)
		return (0);
	j = 0;
	while (i < ft_strlen(s1))
	{
		fresh[i] = s1[i];
		i++;
	}
	while (i < ft_strlen(s1) + ft_strlen(s2))
		fresh[i++] = s2[j++];
	fresh[i] = '\0';
	return (fresh);
}

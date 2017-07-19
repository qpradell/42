/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:36:17 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/18 09:11:51 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	size_t start;

	i = 0;
	j = 0;
	if (!(ft_strcmp(little, "")))
		return ((char *)big);
	while (big[i] && i < len)
	{
		start = i;
		j = 0;
		while (big[i] == little[j] && i < len)
		{
			i++;
			j++;
			if (little[j] == '\0' && little[j - 1] == big[i - 1])
				return (char *)(&big[start]);
		}
		i = start;
		i++;
	}
	return (0);
}

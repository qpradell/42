/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 07:49:51 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/18 09:12:04 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int start;

	i = 0;
	j = 0;
	if (!(ft_strcmp(little, "")))
		return ((char *)big);
	while (big[i])
	{
		start = i;
		j = 0;
		while (big[i] && little[j] && (big[i] == little[j]))
		{
			i++;
			j++;
			if (little[j] == '\0')
				return (char *)(&big[start]);
		}
		i = start;
		i++;
	}
	return (0);
}

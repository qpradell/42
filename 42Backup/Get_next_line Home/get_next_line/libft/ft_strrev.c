/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:42:49 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/15 17:43:47 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int swap;

	i = 0;
	j = 0;
	swap = 0;
	while (str[i])
	{
		i++;
	}
	i--;
	while (i > j)
	{
		swap = str[i];
		str[i] = str[j];
		str[j] = swap;
		j++;
		i--;
	}
	return (str);
}

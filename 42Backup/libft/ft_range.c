/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:57:05 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/24 11:58:04 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *range;

	i = 0;
	range = NULL;
	if (min >= max)
	{
		return (range);
	}
	range = malloc(sizeof(int) * (max - min));
	if (range == 0)
	{
		return (0);
	}
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:31:55 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/21 17:37:05 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int signe;
	int nb;

	signe = 1;
	nb = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
				*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '+')
		str++;
	if (*str == '-')
	{
		str--;
		if (*str == '+')
			return (0);
		str++;
		signe = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		nb = *str - '0' + nb * 10;
		str++;
	}
	return (nb * signe);
}

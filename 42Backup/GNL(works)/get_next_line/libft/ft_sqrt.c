/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:50:31 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/24 11:50:51 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int		prime;
	int		i;

	prime = 1;
	i = 1;
	while (prime < nb)
	{
		i++;
		prime = i * i;
	}
	if (prime == nb)
		return (i);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:38:04 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/24 11:42:00 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*fresh;

	fresh = (char *)malloc(size * sizeof(char) + 1);
	if (fresh == 0)
		return (NULL);
	ft_bzero(fresh, size + 1);
	return ((char*)fresh);
}

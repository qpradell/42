/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 08:16:40 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/16 09:53:02 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_int_length(int n)
{
	int len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while ((n / 10) != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char		*ft_fresh_str(int len, int n, int neg, char *str)
{
	while (len >= 0)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	if (neg < 0)
		str[0] = '-';
	return (str);
}

char			*ft_itoa(int n)
{
	char	*fresh;
	size_t	len;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = n;
	len = ft_int_length(n);
	if (!(fresh = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	fresh[len] = '\0';
	len--;
	if (n == 0)
	{
		fresh[0] = '0';
		return (fresh);
	}
	if (n < 0)
		n = -n;
	return (ft_fresh_str(len, n, neg, fresh));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:44:07 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/07 11:25:30 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		printf("%d\n", i);
		if (f(tab[i]) == 1)
			j++;
		printf("valeur de j =%d\n", j);
		i++;
	}
	return (j);
}

int ft_test(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if (i == 5)
		return (1);
	return (0);
}
int main()
{
	char *a[4];
	a[0] = "Bhh";
	a[1] = "Blahh";
	a[2] = "Blhff";


	printf("%d\n", ft_count_if(a, &ft_test));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:50:28 by qpradell          #+#    #+#             */
/*   Updated: 2016/11/07 14:54:58 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

void	ft_view(char **str)
{
	int i;

	i = 1;
	while (str[i])
	{
		ft_putstr(str[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		index;
	int		next;
	char	*swap;

	index = 1;
	next = 2;
	while (next < argc)
	{
		if (ft_strcmp(argv[index], argv[next]) > 0)
		{
			swap = argv[index];
			argv[index] = argv[next];
			argv[next] = swap;
			index = 1;
			next = index + 1;
		}
		else
		{
			index++;
			next = index + 1;
		}
	}
	ft_view(argv);
	return (0);
}

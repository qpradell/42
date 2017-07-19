/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 09:35:22 by qpradell          #+#    #+#             */
/*   Updated: 2016/12/09 09:55:55 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



int		get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	static size_t	i;

	buf = 0;
	i = 0;
	while ((count = read(fd, buf, BUFF_SIZE)) == BUFF_SIZE)
	{
		if (!(ft_strchr(buf, '\n')))
		{
			line[i] = ft_strcpy(line[i], ft_strchr(buf, '\n') - 1 );
			return (line);
		}
		else
			line[i] = 

		if ((count = read(fd, buf, BUFF_SIZE)) == -1)
			return (NULL);
	}
	buf
}

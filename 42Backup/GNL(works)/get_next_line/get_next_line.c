/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <qpradell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 09:35:22 by qpradell          #+#    #+#             */
/*   Updated: 2017/04/18 13:11:10 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static t_list				*get_right_file(t_list **file, const int fd)
{
	t_list	*tmp;

	tmp = *file;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0", fd);
	ft_lstadd(file, tmp);
	tmp = *file;
	return (tmp);
}

unsigned long				ft_copyuntil(char **dst, char *src, char stop)
{
	int i;
	int j;
	int position;

	i = 0;
	j = 0;
	while (src[i] && src[i] != stop)
		i++;
	position = i;
	if (!(*dst = ft_strnew(i)))
		return (-1);
	while (j < position && src[j])
		j++;
	j = 0;
	ft_strncpy(*dst, src, i);
	return (position);
}

int							get_next_line(const int fd, char **line)
{
	char				buf[BUFF_SIZE + 1];
	static	t_list		*file;
	t_list				*current;
	int					retval;
	int					i;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	current = get_right_file(&file, fd);
	while ((retval = read(fd, buf, BUFF_SIZE)) != 0)
	{
		buf[retval] = '\0';
		if (!(current->content = ft_strjoin(current->content, buf)))
			return (-1);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (retval < BUFF_SIZE && ft_strlen(current->content) == 0)
		return (0);
	i = ft_copyuntil(line, current->content, '\n');
	(i < (int)ft_strlen(current->content))
		? current->content = (current->content + i + 1)
		: ft_strclr(current->content);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <qpradell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 09:35:22 by qpradell          #+#    #+#             */
/*   Updated: 2017/04/11 18:38:18 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

/*  get_right_file :
Check if the File is already opened.
=> If yes, returns the element that contains it
=> If not, creates a new element with the new Fd and set its content with '\0'
*/

static t_list		*get_right_file(t_list **file, const int fd)
{
	t_list	*tmp;

	tmp = *file;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0",fd);
	ft_lstadd(file, tmp);
	tmp = *file;
	return (tmp);
}

/* ft_copyuntil :
Copies the content of current->content before the first '\n'
Copies it into line through a fresh string
*/

unsigned long				ft_copyuntil(char **dst, char *src, char stop)
{
	int i;
	int position;

	i = 0;
	while (src[i] && src[i] != stop)
		i++;

	printf("i = %d\n", i);

	position = i;
	if (!(*dst = ft_strnew(i)))
		return (0);
	i = 0;
	while (dst[i] && i < position && src[i] != stop)
	{
		dst[i] = &src[i];
		i++;
	}
	dst[i] = "\0";

	printf("dst = %s\n", *dst);

	return (position);

}
/*int				ft_copyuntil(char **dst, char *src, char stop)
{
	int	i;
	int position;

	i = 0;
	position = 0;
	while (src[i] && src[i] != stop)
	{
		dst[i] = &src[i];
		printf("dst[i] = %c\n", *dst[i]);
		i++;
	}
	dst[i] = "\0";
	printf("dst = %s\n", *dst);
	return (*dst);
}


char				*ft_strjoinchar(char *str, char c)
{
	char *str_new;
	size_t i;

	str_new = NULL;
	if (!str || !c)
		return (0);
	if (!(str_new = ft_strnew(ft_strlen(str + 1))));
		return (0);
	while (str[i])
	{
		str_new[i] = str[i];
		i++;
	}
	str_new[i] = c;
	return (str_new);
}*/

int					get_next_line(const int fd, char **line)
{
	char							buf[BUFF_SIZE + 1];
	static	t_list		*file;
	t_list						*current;
	int								retval;
	int								i;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	current = get_right_file(&file, fd);
	while ((retval = read(fd, buf, BUFF_SIZE)))
	{
		buf[retval] = '\0';
		current->content = ft_strjoin(current->content, buf);
		if (ft_strchr(current->content, '\n'))
		{
			i = ft_copyuntil(line, current->content, '\n');
			printf("line 1 = %s\n", *line);
			if (ft_strlen(current->content) != ft_copyuntil(line, current->content, '\n'))
			{
				current->content = current->content + i;
				printf("Current->content 2 = %s\n", current->content);
				return (1);
			}
			printf("Current->content 3 = %s\n", current->content);
			ft_strclr(current->content);
			return (1);
		}
	}
		if (retval < BUFF_SIZE && ft_strlen(current->content) == 0)
				return (0);
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 09:36:16 by qpradell          #+#    #+#             */
/*   Updated: 2017/04/11 11:52:35 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <libft.h>

# define BUFF_SIZE 32

//typedef	struct	t_gnl
//{
//	int		fd;
//	char	*residue;
//	char	*buffer;
//}				t_gnl;

int				get_next_line(const int fd, char **line);

# endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpradell <qpradell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 13:30:09 by qpradell          #+#    #+#             */
/*   Updated: 2017/04/11 18:38:21 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int ac, char **av)
{
	char *line;
	int fd;

	if (ac == 1)
		fd = 0;
	if (ac == 2)
		fd = open(av[1], O_RDONLY);
	else
		return (2);
	if (get_next_line(fd, &line) == 1)
	{
		printf("FD = %d\n", fd);
	//printf("GNL = %d\n", get_next_line(fd, &line));
		printf("Line = %s\n", line);
	}
	close(fd);
	return (0);
 }

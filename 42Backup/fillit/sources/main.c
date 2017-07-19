/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majullie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 10:04:37 by majullie          #+#    #+#             */
/*   Updated: 2016/12/07 15:44:52 by qpradell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			main(int argc, char *argv[])
{
	t_llist		*tetris;
	t_ress		*ress;
	t_grid		*grid;
	int			size;

	if (argc != 2)
		die("usage: fillit input_file");
	ft_llist_create(&tetris);
	ress = ft_memalloc(sizeof(t_ress));
	grid = ft_memalloc(sizeof(t_grid));
	if (!tetris || !ress || !grid)
		die("error");
	ress->lst = tetris;
	parse_input(argv[1], ress);
	grid->size = 2;
	size = tetris->size * 4;
	while (grid->size * grid->size < size)
		grid->size++;
	if (grid_alloc(&grid->map, grid->size) == -1)
		free_and_die(ress, "error");
	solve(tetris, grid);
	ft_llist_destroy(&tetris);
	free(grid);
	free(ress);
	return (0);
}

void		die(char *str)
{
	ft_putendl(str);
	exit(EXIT_FAILURE);
}

void		free_and_die(t_ress *p_ress, char *str)
{
	ft_llist_destroy(&(p_ress->lst));
	close(p_ress->fd);
	ft_putendl(str);
	exit(EXIT_FAILURE);
}

int			grid_alloc(char ***p_grid, int grid_size)
{
	int		i;
	char	**grid;

	if (!(grid = (char **)malloc(sizeof(char *) * grid_size)))
		return (-1);
	i = 0;
	while (i < grid_size)
	{
		if (!(grid[i] = (char *)malloc(sizeof(char) * grid_size)))
			return (-1);
		ft_memset(grid[i], '.', grid_size);
		i++;
	}
	*p_grid = grid;
	return (1);
}

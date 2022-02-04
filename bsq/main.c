/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:46:50 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/02 20:53:28 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "prototype.h"

void	ft_else(char *argv, char *character, int total_line)
{
	char	**board;
	int		**num;
	int		*pos;

	board = ft_check_map(argv, character, total_line);
	if (board == NULL)
		ft_putstr("map error\n");
	else
	{
		num = ft_solve(board, character, total_line);
		pos = ft_find_ans(argv, num, total_line);
		pos[3] = total_line;
		pos[4] = ft_len_board(argv);
		ft_output(board, character, pos);
		ft_free(num, pos[3]);
		free(pos);
	}
}

void	ft_else_two(char *character, int total_line)
{
	char	**board;
	int		**num;
	int		*pos;
	int		i;

	board = (char **)malloc(sizeof(char *) * (total_line + 10));
	if (board == NULL)
		return ;
	i = 0;
	while (i < total_line)
		board[i++] = ft_scanf_first();
	board[i] = 0;
	if (!ft_check_map_m(board, character, total_line))
		ft_putstr("map error\n");
	else
	{
		num = ft_solve(board, character, total_line);
		pos = ft_find_ans_m(board, num, total_line);
		pos[3] = total_line;
		pos[4] = ft_strlen(board[0]);
		ft_output(board, character, pos);
		ft_free(num, pos[3]);
		free(pos);
	}
}

void	ft_else_main(void)
{
	char	*charac;
	char	*str;
	int		total_line;

	charac = NULL;
	total_line = 0;
	str = ft_scanf_first();
	charac = ft_read_arg_m(charac, str, &total_line);
	if (charac == NULL || total_line == 0)
		ft_putstr("map error\n");
	else
		ft_else_two(charac, total_line);
	free(charac);
	free(str);
}

int	main(int argc, char **argv)
{
	int		i;
	int		total_line;
	char	*charac;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			total_line = 0;
			charac = ft_read_arg(charac, argv[i], &total_line);
			if (charac == NULL || total_line == 0)
				ft_putstr("map error\n");
			else
				ft_else(argv[i], charac, total_line);
			if (i != argc - 1)
				ft_putstr("\n");
			free(charac);
			i++;
		}
	}
	else
		ft_else_main();
	return (0);
}

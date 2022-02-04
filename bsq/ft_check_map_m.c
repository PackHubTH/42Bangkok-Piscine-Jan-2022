/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:01:55 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/02 20:40:52 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "prototype.h"

int	ft_valid_map_m(char **board, int total_line, int len_board)
{
	int		cnt;

	cnt = 0;
	while (board[cnt])
	{
		if (ft_strlen(board[cnt]) != len_board || cnt >= total_line)
			return (0);
		cnt++;
	}
	if (cnt != total_line)
		return (0);
	return (1);
}

int	ft_valid_two_m(char **b, char *charac, int line, int len_board)
{
	int	i;
	int	j;

	i = 0;
	while (i < line)
	{
		j = 0;
		while (j < len_board)
		{
			if ((b[i][j] != charac[0] && b[i][j] != charac[1])
				|| b[i][j] == charac[2])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_map_m(char **board, char *character, int total_line)
{
	int		len_board;

	len_board = ft_len_first_line_m(board[0]);
	if (len_board == 0)
		return (0);
	if (!(ft_valid_map_m(board, total_line, len_board)))
		return (0);
	if (!(ft_valid_two_m(board, character, total_line, len_board)))
		return (0);
	return (1);
}

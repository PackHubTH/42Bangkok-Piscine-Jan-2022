/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_ans.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 02:57:19 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/02 20:24:06 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"
/*
void	ft_free_m(int **num, int total_line)
{
	int	i;

	i = 0;
	while (i < total_line)
	{
		free(num[i]);
		i++;
	}
	free(num);
}
*/
int	ft_find_max_m(int **num, int total_line, int len_board)
{
	int	maxx;
	int	i;
	int	j;

	maxx = num[0][0];
	i = 0;
	while (i < total_line)
	{
		j = 0;
		while (j < len_board)
		{
			if (num[i][j] > maxx)
				maxx = num[i][j];
			j++;
		}
		i++;
	}
	return (maxx);
}

void	ft_find_pos_m(int **num, int *pos, int total_line, int len_board)
{
	int	i;
	int	j;

	i = 0;
	while (i < total_line)
	{
		j = 0;
		while (j < len_board)
		{
			if (num[i][j] == pos[2])
			{
				pos[0] = i;
				pos[1] = j;
				return ;
			}
			j++;
		}
		i++;
	}
}

int	*ft_find_ans_m(char **board, int **num, int total_line)
{
	int	*pos;
	int	len_board;

	pos = (int *)malloc(sizeof(int) * 10);
	if (pos == NULL)
		return (NULL);
	len_board = ft_strlen(board[0]);
	pos[2] = ft_find_max_m(num, total_line, len_board);
	ft_find_pos_m(num, pos, total_line, len_board);
	return (pos);
}

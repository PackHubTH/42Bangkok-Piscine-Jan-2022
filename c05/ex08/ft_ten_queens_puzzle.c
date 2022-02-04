/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:20:33 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/24 13:34:35 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	g_cnt;

void	ft_print(int board[][10])
{
	int		i;
	int		j;
	char	c;

	j = 0;
	c = '\0';
	while (j < 10)
	{
		i = 0;
		while (i < 10)
		{
			if (board[i][j] == 1)
			{
				c = i + 48;
				write(1, &c, 1);
			}
			i++;
		}
		j++;
	}
	write(1, "\n", 1);
}

int	ft_check_row(int board[][10], int row, int col)
{
	int	j;

	j = 0;
	while (j < col)
	{
		if (board[row][j] == 1)
			return (0);
		j++;
	}
	return (1);
}

int	ft_check_diagonal(int board[][10], int row, int col)
{
	int	i;
	int	j;

	i = row;
	j = col;
	while (i >= 0 && j >= 0)
	{
		if (board[i][j] == 1)
			return (0);
		i--;
		j--;
	}
	i = row;
	j = col;
	while (j >= 0 && i < 10)
	{
		if (board[i][j] == 1)
			return (0);
		i++;
		j--;
	}
	return (1);
}

int	ft_solve(int board[][10], int col)
{
	int	k;

	if (col == 10)
	{
		g_cnt++;
		ft_print(board);
		return (0);
	}
	k = 0;
	while (k < 10)
	{
		if (ft_check_diagonal(board, k, col) && ft_check_row(board, k, col))
		{
			board[k][col] = 1;
			if (ft_solve(board, col + 1))
				return (1);
			board[k][col] = 0;
		}
		k++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	i;
	int	j;

	g_cnt = 0;
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	i = ft_solve(board, 0);
	return (g_cnt);
}

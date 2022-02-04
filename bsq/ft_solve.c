/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:14:19 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/02 17:39:03 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "prototype.h"

int	**ft_malloc(int total_line, int len_board)
{
	int	**num;
	int	i;
	int	j;

	num = (int **)malloc(sizeof(int *) * (total_line + 1));
	if (num == NULL)
		return (NULL);
	i = 0;
	while (i < total_line)
	{
		num[i] = (int *)malloc(sizeof(int) * (len_board + 1));
		if (num[i] == NULL)
			return (NULL);
		j = 0;
		while (j < len_board)
			num[i][j++] = 0;
		num[i][j] = '\0';
		i++;
	}
	num[i] = 0;
	return (num);
}

int	**ft_initial(char **board, char *character, int line, int len_board)
{
	int	i;
	int	j;
	int	**num;

	num = ft_malloc(line, len_board);
	if (num == NULL)
		return (NULL);
	i = 0;
	while (i < line)
	{
		j = 0;
		while (j < len_board)
		{
			if (board[i][j] == character[0])
				num[i][j] = 1;
			j++;
		}
		i++;
	}
	return (num);
}

int	ft_min(int a, int b)
{
	if (a <= b)
		return (a);
	return (b);
}

void	ft_algorithm(int **num, int line, int len_board)
{
	int	i;
	int	j;
	int	min_t_l;

	i = 1;
	while (i < line)
	{
		j = 1;
		while (j < len_board)
		{
			if (num[i][j] == 1)
			{
				min_t_l = ft_min(num[i][j - 1], num[i - 1][j]);
				num[i][j] = ft_min(min_t_l, num[i - 1][j - 1]);
				num[i][j] += 1;
			}
			else
				num[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	**ft_solve(char **board, char *character, int total_line)
{
	int	**num;
	int	len_board;

	len_board = ft_strlen(board[0]);
	num = ft_initial(board, character, total_line, len_board);
	ft_algorithm(num, total_line, len_board);
	return (num);
}

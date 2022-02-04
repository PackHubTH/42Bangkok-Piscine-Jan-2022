/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:53:42 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/23 20:30:50 by sharnvon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	g_cn;
int	g_n;
int	g_fcn;
int	ft_solve(int num[][g_n], int boundary[], int row, int col);
int	check_complete(int num[g_cn][g_cn], int expct[g_fcn], int scores[g_fcn]);
int	check_relax(int num[g_cn][g_cn], int expct[g_fcn], int scores[g_fcn]);

/*
void	ft_print(int num[][g_cn])
{
	int	i;
	int	j;

	i = 0;
	while (i < g_n)
	{
		j = 0;
		while (j < g_n)
		{
			write(1, &num[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}
*/

int	ft_check_all(int num[g_n][g_n], int row, int col, int k)
{
	int	j;

	j = 0;
	while (j < g_n)
	{
		if (num[row][j] == k || num[j][col] == k)
			return (0);
		j++;
	}
	return (1);
}

int	ft_loop(int num[][g_n], int boundary[], int row, int col)
{
	int	k;

	k = 49;
	while (k <= g_n + 48)
	{
		if (ft_check_all(num, row, col, k))
		{
			num[row][col] = k;
			if (ft_solve(num, boundary, row, col + 1))
				return (1);
		}
		num[row][col] = 48;
		k++;
	}
	return (0);
}

int	ft_solve(int num[][g_n], int boundary[], int row, int col)
{
	int	scores[100];

	if (row == g_n - 1 && col == g_n && check_complete(num, boundary, scores))
		return (1);
	else if (row == g_n - 1 && col == g_n)
		return (0);
	if (col == g_n)
		row++;
	if (col == g_n)
		col = 0;
	if (num[row][col] != 48)
		return (ft_solve(num, boundary, row, col + 1));
	return (ft_loop(num, boundary, row, col));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 03:45:21 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/15 04:10:40 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	g_num[11];
int	g_ch[11];
int	g_cnt;

void	ft_initial(void)
{
	int	i;

	i = 0;
	while (i < 11)
	{
		g_num[i] = 0;
		g_ch[i] = 0;
		i++;
	}
	g_cnt = 0;
}

int	ft_factorial(int n)
{
	if (n == 1)
		return (1);
	return (n * ft_factorial(n - 1));
}

void	ft_print(int n)
{
	int	i;
	int	idx;

	i = 0;
	while (i < n)
	{
		idx = g_num[i] + 47;
		write(1, &idx, 1);
		i++;
	}
	if (ft_factorial(10) / (ft_factorial(10 - n) * ft_factorial(n)) != g_cnt)
		write(1, ", ", 2);
}

void	ft_combi(int state, int last, int n)
{
	int	j;

	if (state == n)
	{
		g_cnt++;
		ft_print(n);
		return ;
	}
	j = last + 1;
	while (j <= 10)
	{
		if (g_ch[j] != 1)
		{
			g_ch[j] = 1;
			g_num[state] = j;
			ft_combi(state + 1, j, n);
			g_ch[j] = 0;
		}
		j++;
	}
}

void	ft_print_combn(int n)
{
	ft_initial();
	ft_combi(0, 0, n);
}

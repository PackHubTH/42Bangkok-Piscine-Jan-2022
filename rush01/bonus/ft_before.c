/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_before.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharnvon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:50:12 by sharnvon          #+#    #+#             */
/*   Updated: 2022/01/23 20:39:16 by sharnvon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_n;

// use in main
int	insert_constraint(int *constraint, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
			if (!(*str >= '1' && *str <= 48 + g_n))
				return (0);
			else
				constraint[j] = *str - '0';
			j++;
		}
		else if (i % 2 == 1)
		{
			if (*str != ' ')
				return (0);
		}
		str++;
		i++;
	}
	return (1);
}

// 4-1
void	first_loop(int i, int k, int num[][g_n], int *constraint)
{
	i = 0;
	while (i < g_n)
	{
		if (constraint[i] == g_n && constraint[i + g_n] == 1)
		{
			k = 0;
			while (k <= g_n - 1)
			{
				num[k][i] = k + 1 + 48;
				k++;
			}
		}
		else if (constraint[i] == 1 && constraint[i + g_n] == g_n)
		{
			k = g_n - 1;
			while (k >= 0)
			{
				num[g_n - 1 - k][i] = k + 1 + 48;
				k--;
			}
		}
		i++;
	}
}

// 1-4
void	second_loop(int i, int k, int num[][g_n], int *constraint)
{
	i = 0;
	while (i < g_n)
	{
		if (constraint[g_n * 2 + i] == g_n && constraint[g_n * 3 + i] == 1)
		{
			k = 0;
			while (k <= 3)
			{
				num[i][k] = k + 1 + 48;
				k++;
			}
		}
		else if (constraint[g_n * 2 + i] == 1 && constraint[g_n * 3 + i] == g_n)
		{
			k = g_n - 1;
			while (k >= 0)
			{
				num[i][g_n - 1 - k] = k + 1 + 48;
				k--;
			}
		}
		i++;
	}
}

// this is because function can't exceed 25 lines
void	last_loop(int i, int num[][g_n], int constraint[])
{
	i = 0;
	while (i < g_n)
	{
		if (constraint[g_n * 2 + i] == 1)
			num[i][0] = 48 + g_n;
		i++;
	}
	i = 0;
	while (i < g_n)
	{
		if (constraint[g_n * 3 + i] == 1)
			num[i][g_n - 1] = 48 + g_n;
		i++;
	}
}

// main algorithm
void	insert_before(int num[][g_n], int *constraint)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	first_loop(i, k, num, constraint);
	second_loop(i, k, num, constraint);
	i = 0;
	while (i < g_n)
	{
		if (constraint[i] == 1)
			num[0][i] = 48 + g_n;
		i++;
	}
	i = 0;
	while (i < g_n)
	{
		if (constraint[g_n + i] == 1)
			num[g_n - 1][i] = 48 + g_n;
		i++;
	}
	last_loop(i, num, constraint);
}

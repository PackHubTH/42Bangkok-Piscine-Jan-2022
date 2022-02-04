/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharnvon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:48:33 by sharnvon          #+#    #+#             */
/*   Updated: 2022/01/23 20:45:30 by sharnvon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_n;

void	insert_zero(int num[][g_n])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < g_n)
	{
		j = 0;
		while (j < g_n)
		{
			num[i][j] = 48;
			j++;
		}
		i++;
	}
}

void	print2d(int num[][g_n])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < g_n)
	{
		j = 0;
		while (j < g_n)
		{
			write(1, &num[i][j], 1);
			if (j < g_n - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	print1d(int num[])
{
	int		i;
	char	c;

	i = 0;
	while (i < g_n * 4)
	{
		c = num[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
	}
	write (1, "\n", 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	i;	

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

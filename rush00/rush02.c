/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:51:31 by spoolpra          #+#    #+#             */
/*   Updated: 2022/01/16 00:45:21 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	check_letter(long int length, long int width, long int x, long int y)
{
	if (length == 0 && width == 0)
	{
		return ('A');
	}
	else if (length == 0 && width == x - 1)
	{
		return ('A');
	}
	else if (width == 0 && length == y - 1)
	{
		return ('C');
	}
	else if (length == y - 1 && width == x - 1)
	{
		return ('C');
	}
	else if ((width == 0 || length == 0) || (width == x - 1 || length == y - 1))
	{
		return ('B');
	}
	else
	{
		return (' ');
	}
}

char	check_letter_flag(long int l, long int w, long int x, long int y)
{
	if (l == 0 && w == x - 1)
	{
		return ('C');
	}
	else if (l == 0 && w == 0)
	{
		return ('C');
	}
	else if (l == y - 1 && w == x - 1)
	{
		return ('A');
	}
	else if (w == 0 && l == y - 1)
	{
		return ('A');
	}
	else if ((w == 0 || l == 0) || (w == x - 1 || l == y - 1))
	{
		return ('B');
	}
	else
	{
		return (' ');
	}
}

void	display(long int x, long int y, int flag)
{
	long int	length;
	long int	width;

	if (x != 0 && y != 0)
	{	
		length = 0;
		while (length < y)
		{
			width = 0;
			while (width < x)
			{
				if (flag)
					ft_putchar(check_letter_flag(length, width, x, y));
				else
					ft_putchar(check_letter(length, width, x, y));
				width++;
			}
			ft_putchar('\n');
			length++;
		}
	}
}

void	rush(int x, int y)
{
	int			flag;
	long int	l_x;
	long int	l_y;

	l_x = x;
	l_y = y;
	flag = 0;
	if (l_y < 0 && !(l_x == -1 && l_y == -1))
		flag = 1;
	if (l_x < 0)
		l_x = l_x * -1;
	if (l_y < 0)
	{
		l_y = l_y * -1;
	}
	display(l_x, l_y, flag);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:51:31 by spoolpra          #+#    #+#             */
/*   Updated: 2022/01/16 00:52:35 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	check_letter(long int length, long int width, long int x, long int y)
{
	x--;
	y--;
	if ((length == 0 && width == 0) || (width == 0 && length == y))
		return ('A');
	else if ((length == 0 && width == x) || (length == y && width == x))
		return ('C');
	else if ((width == 0 || length == 0) || (width == x || length == y))
		return ('B');
	else
		return (' ');
}

char	check_flag(long int length, long int width, long int x, long int y)
{
	x--;
	y--;
	if ((length == 0 && width == x) || (length == y && width == x))
		return ('A');
	else if ((length == 0 && width == 0) || (width == 0 && length == y))
		return ('C');
	else if ((width == 0 || length == 0) || (width == x || length == y))
		return ('B');
	else
		return (' ');
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
					ft_putchar(check_flag(length, width, x, y));
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
	if ((x < 0 || y < 0) && !(x < 0 && y < 0))
		flag = 1;
	if (l_x < 0)
		l_x = l_x * -1;
	if (l_y < 0)
		l_y = l_y * -1;
	display(l_x, l_y, flag);
}

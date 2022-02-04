/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:51:31 by spoolpra          #+#    #+#             */
/*   Updated: 2022/01/16 00:28:05 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	check_letter00(int length, int width, long int x, long int y)
{
	if ((length == 0 || length == y - 1) && (width == 0 || width == x - 1))
	{
		return ('o');
	}
	else if ((length == 0) || (length == y - 1))
	{
		return ('-');
	}
	else if ((width == 0) || (width == x - 1))
	{
		return ('|');
	}
	else
	{
		return (' ');
	}
}

void	display(long int l_x, long int l_y)
{
	long int	width;
	long int	length;

	if (l_x != 0 && l_y != 0)
	{
		length = 0;
		while (length < l_y)
		{
			width = 0;
			while (width < l_x)
			{
				ft_putchar(check_letter00(length, width, l_x, l_y));
				width++;
			}
			ft_putchar('\n');
				length++;
		}
	}
}

void	rush(int x, int y)
{
	long int	l_x;
	long int	l_y;

	l_x = x;
	l_y = y;
	if (l_x < 0)
		l_x = l_x * -1;
	if (l_y < 0)
		l_y = l_y * -1;
	display(l_x, l_y);
}

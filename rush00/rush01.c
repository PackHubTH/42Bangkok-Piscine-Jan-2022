/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:51:31 by spoolpra          #+#    #+#             */
/*   Updated: 2022/01/16 00:42:45 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	check_letter_01(long int length, long int width, long int x, long int y)
{
	x--;
	y--;
	if (length == 0 && width == 0)
		return ('/');
	else if (length == 0 && width == x)
		return ('\\');
	else if (length == y && width == 0)
		return ('\\');
	else if (length == y && width == x)
		return ('/');
	else if (length == 0 || width == 0 || length == y || width == x)
		return ('*');
	else
		return (' ');
}

void	display(long int l_x, long int l_y)
{
	long int	length;
	long int	width;

	if (l_x != 0 && l_y != 0)
	{
		length = 0;
		while (length < l_y)
		{
			width = 0;
			while (width < l_x)
			{
				ft_putchar(check_letter_01(length, width, l_x, l_y));
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

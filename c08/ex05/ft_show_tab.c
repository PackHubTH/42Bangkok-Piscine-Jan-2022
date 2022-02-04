/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:41:37 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/27 00:20:47 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_convert_int_to_str(long int nb)
{
	char	buffer[12];
	int		i;
	int		x;

	i = 0;
	while (nb != 0)
	{
		x = nb % 10 + 48;
		buffer[i++] = x;
		nb = nb / 10;
	}
	i -= 1;
	while (i >= 0)
	{
		write(1, &buffer[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n == 0)
		write(1, "0", 1);
	else
	{
		if (n < 0)
		{
			n *= -1;
			write(1, "-", 1);
		}
		ft_convert_int_to_str(n);
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		ft_putstr(par->str);
		ft_putnbr(par->size);
		ft_putstr(par->copy);
		par++;
	}
}

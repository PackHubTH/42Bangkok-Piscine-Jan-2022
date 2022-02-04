/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs_header.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharuva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:23:57 by ncharuva          #+#    #+#             */
/*   Updated: 2022/01/30 17:24:12 by ncharuva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

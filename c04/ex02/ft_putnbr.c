/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 23:03:58 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/15 04:27:52 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:07:13 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/25 19:55:12 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_isspace(char alpha)
{
	if ((alpha >= 9 && alpha <= 13) || alpha == 32)
		return (1);
	return (0);
}

int	ft_check_base(int len, char *base)
{
	int	idx;

	while (base[len] != '\0')
	{
		idx = len + 1;
		while (base[idx] != '\0')
		{
			if (base[len] == base[idx])
				return (0);
			idx++;
		}
		if (base[len] == '+' || base[len] == '-' || ft_isspace(base[len]))
			return (0);
		len++;
	}
	return (len);
}

long int	ft_check_sign(long int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	return (nbr);
}

void	ft_print(long int nbr, int len, char *num, char *base)
{
	int	idx;
	int	x;

	idx = 0;
	x = 0;
	while (nbr != 0)
	{
		x = nbr % len;
		num[idx++] = base[x];
		nbr /= len;
	}
	while (idx > 0)
	{
		write(1, &num[idx - 1], 1);
		idx--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			len;
	char		num[1010];

	n = (long int)nbr;
	len = 0;
	len = ft_check_base(len, base);
	if (len == 0 || len == 1)
		return ;
	if (n == 0)
		write(1, &base[0], 1);
	else
	{
		n = ft_check_sign(n);
		ft_print(n, len, num, base);
	}
}

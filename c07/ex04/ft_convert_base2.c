/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:07:13 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/26 02:19:23 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_isspace(char alpha);
int	ft_check_base(int len, char *base);

long int	ft_check_sign(long int nbr, char *num)
{
	if (nbr < 0)
	{
		*num = '-';
		nbr *= -1;
	}
	return (nbr);
}

char	*ft_insert(char *temp, char *num, int idx)
{
	char	*start;
	int		i;

	start = num;
	i = 0;
	while (idx > 0)
	{
		*num = temp[idx - 1];
		num++;
		idx--;
	}
	*num = '\0';
	return (start);
}

char	*ft_solve(long int nbr, int len_base, char *num, char *base)
{
	int		idx;
	int		ch;
	char	temp[1010];

	idx = 0;
	ch = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		ch = 1;
	}
	while (nbr != 0)
	{
		temp[idx++] = base[nbr % len_base];
		nbr /= len_base;
	}
	if (ch)
		temp[idx++] = '-';
	temp[idx] = '\0';
	num = (char *)malloc(sizeof(char) * (idx + 2));
	return (ft_insert(temp, num, idx));
}

char	*ft_convert_base2(int nbr, char *base)
{
	long int	n;
	int			len;
	char		*num;

	n = (long int)nbr;
	num = malloc(sizeof(char));
	len = 0;
	len = ft_check_base(len, base);
	if (len == 0 || len == 1)
		return (NULL);
	if (n == 0)
	{
		*num = base[0];
		return (num);
	}
	return (ft_solve(n, len, num, base));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:47:23 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/30 23:16:38 by judomsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "struct.h"

void	ft_putstr(char *str);
void	search(t_dictstruct *hash_arr, int key, int size);

void	ft_below(t_dictstruct *hash_arr, unsigned int nb, int size)
{
	int	key;

	key = nb % 100;
	if (key <= 20)
	{
		if ((key == 0 && nb == 0) || (key != 0 && nb > 0))
			search(hash_arr, key, size);
	}
	else
	{
		search(hash_arr, ((key / 10) * 10), size);
		if (key % 10 != 0)
		{
			ft_putstr(" ");
			search(hash_arr, key % 10, size);
		}
	}
}

void	ft_one_to_hundred(t_dictstruct *hash_arr, unsigned int nb, int size)
{
	int	key;

	key = nb / 100 % 10;
	if (key != 0 && nb > 0)
	{
		search(hash_arr, key, size);
		ft_putstr(" ");
		search(hash_arr, 100, size);
		if (nb % 100 != 0)
			ft_putstr(" ");
	}
	ft_below(hash_arr, nb, size);
}

void	ft_send_key(t_dictstruct *hash_arr, unsigned int nb, int size)
{
	if (nb >= 1000000000)
	{
		ft_one_to_hundred(hash_arr, nb / 1000000000 % 1000, size);
		ft_putstr(" ");
		search(hash_arr, 1000000000, size);
		if (nb % 1000000000 != 0)
			ft_putstr(" ");
	}
	if (nb % 1000000000 >= 1000000)
	{
		ft_one_to_hundred(hash_arr, nb / 1000000 % 1000, size);
		ft_putstr(" ");
		search(hash_arr, 1000000, size);
		if (nb % 1000000 != 0)
			ft_putstr(" ");
	}
	if (nb % 1000000 >= 1000)
	{
		ft_one_to_hundred(hash_arr, nb / 1000 % 1000, size);
		ft_putstr(" ");
		search(hash_arr, 1000, size);
		if (nb % 1000 != 0)
			ft_putstr(" ");
	}
	ft_one_to_hundred(hash_arr, nb, size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 04:43:16 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/16 05:22:10 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap_element(int *tab, int i, int j)
{
	int	temp1;
	int	temp2;

	temp1 = tab[i];
	temp2 = tab[j];
	tab[i] = temp2;
	tab[j] = temp1;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	minn;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		minn = i;
		while (j < size)
		{
			if (tab[j] < tab[minn])
			{
				minn = j;
			}
			j++;
		}
		ft_swap_element(tab, i, minn);
		i++;
	}
}

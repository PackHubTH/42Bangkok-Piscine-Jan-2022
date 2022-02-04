/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 04:27:39 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/16 05:28:52 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	test1(int i, int *tab)
{
	printf("Before: ");
	i = 0;
	while (i < 8)
	{
		tab[i] = 8 - i - 1;
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, 8);
	printf("After: ");
	i = 0;
	while (i < 8)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}

void	test2(int i, int *tab)
{	
	printf("Before: ");
	i = 0;
	while (i < 10)
	{
		tab[i] = (2 * i + 2) % 10;
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, 10);
	printf("After: ");
	i = 0;
	while (i < 10)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	tab[10];
	int	i;

	i = 0;
	tab[0] = 0;
	test1(i, tab);
	printf("\n");
	test2(i, tab);
	return (0);
}

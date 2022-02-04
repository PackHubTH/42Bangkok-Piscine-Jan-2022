/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 04:15:27 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/04 01:54:05 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));
int		ft_compare(int a, int b);
void	ft_test(int nb);

int	main(void)
{
	ft_test(0);
	ft_test(10);
	ft_test(100);
	return (0);
}

void	ft_test(int nb)
{
	int	*tab;
	int	i;

	printf("initial: length = %d\n", nb);
	tab = malloc(sizeof(int) * (nb + 1));
	i = -1;
	while (++i < nb)
	//	tab[i] = i * i % 42;
		tab[i] = nb - i;
	tab[i] = '\0';
	i = -1;
	while (++i < nb)
	{
		printf("%d ", tab[i]);
	}
	printf("\nft_is_sort(%d): %d\n\n", nb, ft_is_sort(tab, nb, &ft_compare));
	free(tab);
}

int	ft_compare(int a, int b)
{
	return (a - b);
}

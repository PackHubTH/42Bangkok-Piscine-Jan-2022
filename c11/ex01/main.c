/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 04:15:27 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/03 12:00:32 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int));
int	ft_access(int nb);
void	ft_test(int nb);

int	main(void)
{
	ft_test(0);
	ft_test(10);
	return (0);
}

void	ft_test(int nb)
{
	int	*tab;
	int	i;

	printf("ft_map(tab, %d, &ft_access)\n", nb);
	tab = malloc(sizeof(int) * (nb + 1));
	i = -1;
	while (++i < nb)
		tab[i] = i;
	tab[i] = '\0';
	ft_map(tab, nb, &ft_access);
	printf("\n\n");
	free(tab);
}

int	ft_access(int nb)
{
	int	num[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	printf("%d ", num[nb]);
	return (num[nb]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 04:15:27 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/03 04:26:24 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_foreach(int *tab, int length, void (*f)(int));
void	ft_putnbr(int nb);
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

	printf("ft_foreach(tab, %d, &ft_putnbr)\n", nb);
	tab = malloc(sizeof(int) * (nb + 1));
	i = -1;
	while (++i < nb)
		tab[i] = i;
	tab[i] = '\0';
	ft_foreach(tab, nb, &ft_putnbr);
	printf("\n\n");
	free(tab);
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
	write(1, " ", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:18:16 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/15 03:59:54 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_answer(int first, int second, int third, int forth)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, " ", 1);
	write(1, &third, 1);
	write(1, &forth, 1);
	if (!(first == third && first == forth && second == 56))
		write(1, ", ", 2);
}

void	ft_forth_digit(int first, int second, int third)
{
	int	i;

	if (first == third && second != 57)
		i = second + 1;
	else
		i = 48;
	while (i <= 57)
	{
		ft_print_answer(first, second, third, i);
		i++;
	}
}

void	ft_third_digit(int first, int second)
{
	int	i;

	if (second == 57)
		i = first + 1;
	else
		i = first;
	while (i <= 57)
	{
		ft_forth_digit(first, second, i);
		i++;
	}
}

void	ft_second_digit(int first)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		ft_third_digit(first, i);
		i++;
	}
}

void	ft_print_comb2(void)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		ft_second_digit(i);
		i++;
	}
}

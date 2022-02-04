/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:18:16 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/13 21:40:06 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_answer(int first, int second, int third)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
	write(1, ", ", 2);
}

void	ft_third_digit(int first, int second)
{
	int	i;

	i = second + 1;
	while (i <= 57)
	{
		ft_print_answer(first, second, i);
		i++;
	}
}

void	ft_second_digit(int first)
{
	int	i;

	i = first + 1;
	while (i <= 57)
	{
		ft_third_digit(first, i);
		i++;
	}
}

void	ft_print_comb(void)
{
	int	i;

	i = 48;
	while (i <= 54)
	{
		ft_second_digit(i);
		i++;
	}
	write(1, "789", 3);
}

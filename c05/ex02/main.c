/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:29:56 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/22 18:38:39 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("Input: n = 0, pow = 0\n");
	printf("Your output: %d\n", ft_iterative_power(0, 0));
	printf("Expect output: 1\n\n");

	printf("Input: n = -2, pow = 0\n");
	printf("Your output: %d\n", ft_iterative_power(-2, 0));
	printf("Expect output: 1\n\n");

	printf("Input: n = 4, pow = -4\n");
	printf("Your output: %d\n", ft_iterative_power(4, -4));
	printf("Expect output: 0\n\n");

	printf("Input: n = -4, pow = -4\n");
	printf("Your output: %d\n", ft_iterative_power(-4, -4));
	printf("Expect output: 0\n\n");

	printf("Input: n = -8, pow = 3\n");
	printf("Your output: %d\n", ft_iterative_power(-8, 3));
	printf("Expect output: -512\n\n");

	printf("Input: n = 4, pow = 5\n");
	printf("Your output: %d\n", ft_iterative_power(4, 5));
	printf("Expect output: 1024\n\n");

	printf("Input: n = -2, pow = 31\n");
	printf("Your output: %d\n", ft_iterative_power(-2, 31));
	printf("Expect output: -2147483648\n\n");

}


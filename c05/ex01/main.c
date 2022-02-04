/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:21:45 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/22 18:22:20 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("Input: n = 0\n");
	printf("Your output: %d\n", ft_recursive_factorial(0));
	printf("Expected output: 1\n\n");

	printf("Input: n = -12\n");
	printf("Your output: %d\n", ft_recursive_factorial(-12));
	printf("Expected output: 0\n\n");

	printf("Input: n = 8\n");
	printf("Your output: %d\n", ft_recursive_factorial(8));
	printf("Expected output: 40320\n\n");

	printf("Input: n = 12\n");
	printf("Your output: %d\n", ft_recursive_factorial(12));
	printf("Expected output: 479001600\n\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 20:07:58 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/22 20:25:43 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("Input: n = 0\n");
	printf("Your output: %d\n", ft_is_prime(0));
	printf("Expected output: 0\n\n");

	printf("Input: n = 1\n");
	printf("Your output: %d\n", ft_is_prime(1));
	printf("Expected output: 0\n\n");

	printf("Input: n = 2\n");
	printf("Your output: %d\n", ft_is_prime(2));
	printf("Expected output: 1\n\n");

	printf("Input: n = -42\n");
	printf("Your output: %d\n", ft_is_prime(-42));
	printf("Expected output: 0\n\n");

	printf("Input: n = 1679457781\n");
	printf("Your output: %d\n", ft_is_prime(1679457781));
	printf("Expected output: 1\n\n");

	printf("Input: n = 2147483647\n");
	printf("Your output: %d\n", ft_is_prime(2147483647));
	printf("Expected output: 1\n\n");

	printf("Input: n = 2147483646\n");
	printf("Your output: %d\n", ft_is_prime(2147483646));
	printf("Expected output: 0\n\n");

	return (0);
}

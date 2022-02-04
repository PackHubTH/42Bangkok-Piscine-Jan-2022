/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 20:07:58 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/22 20:50:19 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("Input: n = 0\n");
	printf("Your output: %d\n", ft_find_next_prime(0));
	printf("Expected output: 2\n\n");

	printf("Input: n = -2147483648\n");
	printf("Your output: %d\n", ft_find_next_prime(-2147483648));
	printf("Expected output: 2\n\n");

	printf("Input: n = 2\n");
	printf("Your output: %d\n", ft_find_next_prime(2));
	printf("Expected output: 2\n\n");

	printf("Input: n = 42\n");
	printf("Your output: %d\n", ft_find_next_prime(42));
	printf("Expected output: 43\n\n");

	printf("Input: n = 1679457769\n");
	printf("Your output: %d\n", ft_find_next_prime(1679457769));
	printf("Expected output: 1679457781\n\n");

	printf("Input: n = 2147483647\n");
	printf("Your output: %d\n", ft_find_next_prime(2147483647));
	printf("Expected output: 2147483647\n\n");

	printf("Input: n = 2147483646\n");
	printf("Your output: %d\n", ft_find_next_prime(2147483646));
	printf("Expected output: 2147483647\n\n");

	return (0);
}

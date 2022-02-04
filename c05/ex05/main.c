/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:25:04 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/22 19:58:29 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("Input: n = 0\n");
	printf("Your output: %d\n", ft_sqrt(0));
	printf("Expected output: 0\n\n");

	printf("Input: n = -36\n");
	printf("Your output: %d\n", ft_sqrt(-36));
	printf("Expected output: 0\n\n");

	printf("Input: n = 1\n");
	printf("Your output: %d\n", ft_sqrt(1));
	printf("Expected output: 1\n\n");

	printf("Input: n = 42\n");
	printf("Your output: %d\n", ft_sqrt(42));
	printf("Expected output: 0\n\n");

	printf("Input: n = 4096\n");
	printf("Your output: %d\n", ft_sqrt(4096));
	printf("Expected output: 64\n\n");

	printf("Input: n = 2147395600\n");
	printf("Your output: %d\n", ft_sqrt(2147395600));
	printf("Expected output: 46340\n\n");

	printf("Input: n = 2147483647\n");
	printf("Your output: %d\n", ft_sqrt(2147483647));
	printf("Expected output: 0\n\n");

}

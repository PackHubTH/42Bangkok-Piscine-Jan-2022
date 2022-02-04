/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:47:06 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/22 18:54:03 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("Input: index = -24\n");
	printf("Your output: %d\n", ft_fibonacci(-24));
	printf("Expect output: -1\n\n");

	printf("Input: index = 0\n");
	printf("Your output: %d\n", ft_fibonacci(0));
	printf("Expect output: 0\n\n");

	printf("Input: index = 1\n");
	printf("Your output: %d\n", ft_fibonacci(1));
	printf("Expect output: 1\n\n");

	printf("Input: index = 24\n");
	printf("Your output: %d\n", ft_fibonacci(24));
	printf("Expect output: 46368\n\n");

	printf("Input: index = 42\n");
	printf("Your output: %d\n", ft_fibonacci(42));
	printf("Expect output: 267914296\n\n");
	return (0);
}


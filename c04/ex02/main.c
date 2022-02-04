/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 00:07:15 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/19 19:56:06 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	printf("Input: 42\n");
	printf("Your output:\n");
	ft_putnbr(42);
	printf("\nExpected output:\n42\n");
	
	printf("\nInput: -42\n");
	printf("Your output:\n");
	ft_putnbr(-42);
	printf("\nExpected output:\n-42\n");
	
	printf("\nInput: 0\n");
	printf("Your output:\n");
	ft_putnbr(0);
	printf("\nExpected output:\n0\n");
	
	printf("\nInput: 123456789\n");
	printf("Your output:\n");
	ft_putnbr(123456789);
	printf("\nExpected output:\n123456789\n");
	
	printf("\nInput: -2147483648\n");
	printf("Your output:\n");
	ft_putnbr(-2147483648);
	printf("\nExpected output:\n-2147483648\n");
	return (0);
}

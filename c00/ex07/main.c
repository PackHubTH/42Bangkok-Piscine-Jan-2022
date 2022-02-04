/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 00:07:15 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/15 04:07:46 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	printf("Input: 42\n");
	ft_putnbr(42);
	printf("\n\nInput: -42\n");
	ft_putnbr(-42);
	printf("\n\nInput: 0\n");
	ft_putnbr(0);
	printf("\n\nInput: 123456789\n");
	ft_putnbr(123456789);
	printf("\n\nInput: -2147483648\n");
	ft_putnbr(-2147483648);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:35:58 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/21 04:29:40 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	printf("Input:\n255, \"0123456789ABCDEF\"\nYour output:\n");
	ft_putnbr_base(255, "0123456789ABCDEF");
	printf("\nExpected output:\nFF");
	printf("\n\n");

	printf("Input:\n5791234, \"0123456789\"\nYour output:\n");
	ft_putnbr_base(5791234, "0123456789");
	printf("\nExpected output:\n5791234");
	printf("\n\n");

	printf("Input:\n1234567, \"abcdefgh\"\nYour output:\n");
	ft_putnbr_base(1234567, "abcdefgh");
	printf("\nExpected output:\neffdcah");
	printf("\n\n");
	
	printf("Input:\n9876543, \"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\"\nYour output:\n");
	ft_putnbr_base(9876543, "0123456789ABCDEFGHIJKLMNOPRSTUVWXYZ");
	printf("\nExpected output:\n6KCGY");
	printf("\n\n");
	
	printf("Input:\n9876543, \"12345678+ABCDEF\"\nYour output:\n");
	ft_putnbr_base(9876543, " 12345678+ABCDEF");
	printf("\nExpected output:\n");
	printf("\n\n");
	
	printf("Input:\n1000057, \"1\"\nYour output:\n");
	ft_putnbr_base(1000057, "1");
	printf("\nExpected output:\n");
	printf("\n\n");
	
	printf("Input:\n1000057, \"01\"\nYour output:\n");
	ft_putnbr_base(1000057, "01");
	printf("\nExpected output:\n11110100001001111001");
	printf("\n\n");
	
	printf("Input:\n-2147483648, \"01234 56789\"\nYour output:\n");
	ft_putnbr_base(-2147483648, "01234 56789");
	printf("\nExpected output:\n");
	printf("\n\n");
	
	printf("Input:\n1, \"zfx\"\nYour output:\n");
	ft_putnbr_base(1, "zfx");
	printf("\nExpected output:\nf");
	printf("\n\n");
	
	printf("Input:\n0, \"zfx\"\nYour output:\n");
	ft_putnbr_base(0, "zfx");
	printf("\nExpected output:\nz");
	printf("\n\n");
	
	printf("Input:\n15649875, \"aaaaa\"\nYour output:\n");
	ft_putnbr_base(15649875, "aaaaa");
	printf("\nExpected output:\n");
	printf("\n\n");
	
	printf("Input:\n10000000, \"zxyfiewq\"\nYour output:\n");
	ft_putnbr_base(10000000, "zxyfiewq");
	printf("\nExpected output:\niwxxfyzz");
	printf("\n\n");
	
	printf("Input:\n-1546897, \"zxyfiewq\"\nYour output:\n");
	ft_putnbr_base(-1546897, "zxyfiewq");
	printf("\nExpected output:\n-eqxeyyx");
	printf("\n\n");
	return (0);
}

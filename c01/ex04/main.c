/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 03:49:51 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/16 04:05:15 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 4242;
	b = 100;
	printf("Input: a = 4242 | b = 100\n");
	ft_ultimate_div_mod(&a, &b);
	printf("Output: a(div) = %d | b(mod) = %d\n\n", a, b);
	printf("Input: a = 42 | b = 42\n");
	ft_ultimate_div_mod(&a, &b);
	printf("Output: a(div) = %d | b(mod) = %d\n\n", a, b);
	a = -2147483648;
	b = 424242;
	printf("Input: a = -2147483648 | b = 424242\n");
	ft_ultimate_div_mod(&a, &b);
	printf("Output: a(div) = %d | b(mod) = %d\n\n", a, b);
	return (0);
}

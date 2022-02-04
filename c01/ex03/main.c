/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 03:49:51 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/16 03:56:37 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	div;
	int	mod;

	div = 0;
	mod = 0;
	printf("Input: a = 42 | b = 9\n");
	ft_div_mod(42, 9, &div, &mod);
	printf("Output: div = %d | mod = %d\n\n", div, mod);
	printf("Input: a = 0 | b = 24\n");
	ft_div_mod(0, 24, &div, &mod);
	printf("Output: div = %d | mod = %d\n\n", div, mod);
	printf("Input: a = -2147483648 | b = 42\n");
	ft_div_mod(-2147483648, 42, &div, &mod);
	printf("Output: div = %d | mod = %d\n\n", div, mod);
	return (0);
}

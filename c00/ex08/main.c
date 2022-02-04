/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 01:35:30 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/14 06:34:53 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_print_combn(int n);

int	main(void)
{
	printf("Input: 2\n");
	ft_print_combn(2);
	printf("\n\nInput: 3\n");
	ft_print_combn(3);
	printf("\n\nInput: 8\n");
	ft_print_combn(8);
	printf("\n\nInput: 9\n");
	ft_print_combn(9);
	return (0);
}

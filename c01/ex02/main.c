/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 03:42:00 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/16 03:45:13 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 24;
	b = 42;
	printf("Before: a = %d | b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After: a = %d | b = %d\n", a, b);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 04:46:52 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/16 03:35:26 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	*g_ptr1;
int	**g_ptr2;
int	***g_ptr3;
int	****g_ptr4;
int	*****g_ptr5;
int	******g_ptr6;
int	*******g_ptr7;
int	********g_ptr8;
int	*********g_ptr9;

int	main(void)
{
	int	n;

	n = 24;
	g_ptr1 = &n;
	g_ptr2 = &g_ptr1;
	g_ptr3 = &g_ptr2;
	g_ptr4 = &g_ptr3;
	g_ptr5 = &g_ptr4;
	g_ptr6 = &g_ptr5;
	g_ptr7 = &g_ptr6;
	g_ptr8 = &g_ptr7;
	g_ptr9 = &g_ptr8;
	printf("Before: %d\n", *********g_ptr9);
	ft_ultimate_ft(g_ptr9);
	printf("After: %d\n", n);
	return (0);
}

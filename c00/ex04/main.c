/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:11:13 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/14 06:17:13 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_is_negative(int n);

int	main(void)
{
	printf("Input: \'\\0\' (null)\n");
	ft_is_negative('\0');
	printf("\n\nInput: 0\n");
	ft_is_negative(0);
	printf("\n\nInput: 42\n");
	ft_is_negative(42);
	printf("\n\nInput: -42\n");
	ft_is_negative(-42);
	return (0);
}

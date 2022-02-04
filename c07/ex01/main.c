/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:25:45 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/25 17:56:24 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max);
void	ft_print(int *num, int size);
void	ft_test(int min, int max, int size);

int	main(void)
{
	ft_test(2, 2, 0);
	ft_test(4, 2, -2);
	ft_test(0, 10, 10);
	ft_test(-42, -24, 18);
	return (0);
}

void	ft_print(int *num, int size)
{
	int	i;

	printf("address: %p\n", num);
	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			printf("%d ", num[i]);
			i++;
		}
	}
	printf("\n\n");
}

void	ft_test(int min, int max, int size)
{
	int	*num;

	printf("Input: min = %d, max = %d\n", min, max);
	num = ft_range(min, max);
	ft_print(num, size);
	free(num);
}

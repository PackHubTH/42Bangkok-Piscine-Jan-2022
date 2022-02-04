/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:25:45 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/25 18:01:57 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max);
void	ft_print(int *num, int size);
void	ft_test(int min, int max);

int	main(void)
{
	ft_test(2, 2);
	ft_test(4, 2);
	ft_test(0, 10);
	ft_test(-42, -24);
	return (0);
}

void	ft_print(int *num, int size)
{
	int	i;

	printf("address: %p\n", num);
	printf("size: %d\n", size);
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

void	ft_test(int min, int max)
{
	int	*num;
	int	size;

	printf("Input: min = %d, max = %d\n", min, max);
	size = ft_ultimate_range(&num, min, max);
	ft_print(num, size);
	free(num);
}

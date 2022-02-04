/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:28:31 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/25 17:31:28 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	if (len < 0)
		len *= -1;
	*range = (int *)malloc(sizeof(int) * len);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
		range[0][i++] = min++;
	return (len);
}

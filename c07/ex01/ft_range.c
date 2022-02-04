/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 03:05:52 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/25 15:27:07 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	if (len < 0)
		len *= -1;
	num = (int *)malloc(sizeof(int) * len);
	i = 0;
	while (min < max)
		num[i++] = min++;
	return (num);
}

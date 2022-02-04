/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 04:29:41 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/03 04:36:12 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*ans;

	ans = (int *)malloc(sizeof(int) * length);
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		ans[i] = f(tab[i]);
		i++;
	}
	return (ans);
}

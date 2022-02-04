/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:24:51 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/04 01:53:25 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	increase;
	int	decrease;

	i = 0;
	increase = 1;
	decrease = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			decrease++;
		else if (f(tab[i], tab[i + 1]) < 0)
			increase++;
		else
		{
			increase++;
			decrease++;
		}
		i++;
	}
	if (increase == length || decrease == length)
		return (1);
	return (0);
}

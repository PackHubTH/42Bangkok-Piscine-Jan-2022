/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 04:25:49 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/16 04:41:48 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp1;
	int	temp2;

	i = 0;
	while (i < size / 2)
	{
		temp1 = tab[i];
		temp2 = tab[size - i - 1];
		tab[i] = temp2;
		tab[size - i - 1] = temp1;
		i++;
	}
}

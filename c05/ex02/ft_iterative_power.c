/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:24:35 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/22 18:29:53 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	ans;

	if (power < 0)
		return (0);
	i = 1;
	ans = 1;
	while (i <= power)
	{
		ans *= nb;
		i++;
	}
	return (ans);
}

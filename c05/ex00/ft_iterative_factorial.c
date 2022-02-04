/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:21:51 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/22 18:18:36 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ans;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = 1;
	ans = 1;
	while (i <= nb)
	{
		ans *= i;
		i++;
	}
	return (ans);
}

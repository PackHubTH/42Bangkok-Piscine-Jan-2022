/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:15:06 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/22 19:59:15 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_find(int nb, int min, int max)
{
	long long	ans;
	long long	ans_squared;

	if (min > max)
		return (0);
	ans = (min + max) / 2;
	ans_squared = ans * ans;
	if (ans_squared == nb)
		return (ans);
	else if (ans_squared < nb)
		return (ft_find(nb, ans + 1, max));
	else
		return (ft_find(nb, min, ans - 1));
}

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	return (ft_find(nb, 0, nb));
}

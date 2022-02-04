/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 20:27:56 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/22 20:49:30 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb, int min, int max)
{
	long long	ans;
	long long	ans_squared;

	if (min > max)
		return (max);
	ans = (min + max) / 2;
	ans_squared = ans * ans;
	if (ans_squared == nb)
		return (ans);
	else if (ans_squared < nb)
		return (ft_sqrt(nb, ans + 1, max));
	else
		return (ft_sqrt(nb, min, ans - 1));
}

int	ft_is_prime(int nb)
{
	int	i;
	int	last;

	last = ft_sqrt(nb, 0, nb);
	i = 2;
	while (i <= last)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

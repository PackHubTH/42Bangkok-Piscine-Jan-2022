/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:59:02 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/21 16:12:46 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isspace(char alpha)
{
	if ((alpha >= 9 && alpha <= 13) || alpha == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int		num;
	int		sign;
	int		i;

	num = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	i = 0;
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	num *= sign;
	return (num);
}

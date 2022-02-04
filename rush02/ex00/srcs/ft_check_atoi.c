/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_atoi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharuva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:42:17 by ncharuva          #+#    #+#             */
/*   Updated: 2022/01/30 22:36:00 by csantivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long int	ft_check_atoi(char *str)
{
	long long int	max;
	int				i;

	max = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
		{		
			while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
			{
				max = (max * 10) + (str[i] - '0');
				if (max > 4294967295)
					return (-1);
				i++;
			}
			if (str[i] == '\0')
				return (max);
		}
		return (-1);
	}
	return (-1);
}

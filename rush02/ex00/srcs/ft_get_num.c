/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharuva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:44:37 by ncharuva          #+#    #+#             */
/*   Updated: 2022/01/30 22:36:41 by csantivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
long long int	ft_check_atoi(char *str);

unsigned int	ft_get_num(char *str)
{
	long long int	i;
	unsigned int	j;

	i = ft_check_atoi(str);
	j = i;
	return (j);
}

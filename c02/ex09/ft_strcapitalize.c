/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 01:58:29 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/19 15:15:49 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		c;
	int		i;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 32;
			i++;
		}
		else if (i > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] += 32;
		else if (str[c] > '9' && str[c] < 'A')
			i = 0;
		else if (str[c] > 'Z' && str[c] < 'a')
			i = 0;
		else if (str[c] < '0' || str[c] > 'z')
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}

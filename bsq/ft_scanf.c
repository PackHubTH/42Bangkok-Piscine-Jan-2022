/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scanf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:28:24 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/02 20:53:43 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "prototype.h"

char	*ft_scanf_first(void)
{
	int		cnt;
	char	buff;
	char	buffer[5000];
	char	*str;

	cnt = 0;
	while (read(0, &buff, 1))
	{
		if (buff == '\n')
			break ;
		buffer[cnt++] = buff;
	}
	buffer[cnt] = 0;
	str = (char *)malloc(sizeof(char) * (cnt + 1000));
	cnt = 0;
	while (buffer[cnt])
	{
		str[cnt] = buffer[cnt];
		cnt++;
	}
	str[cnt] = 0;
	return (str);
}

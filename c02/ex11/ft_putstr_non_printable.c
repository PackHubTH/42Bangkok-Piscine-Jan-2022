/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:48:56 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/19 15:56:46 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int div, int mod)
{
	write(1, "\\", 1);
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	current;
	int				cnt;
	int				div;
	int				mod;

	cnt = 0;
	div = 0;
	mod = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] < 32 || str[cnt] == 127)
		{
			current = str[cnt];
			div = current / 16 + 48;
			mod = current % 16 + 48;
			if (div > 57)
				div += 39;
			if (mod > 57)
				mod += 39;
			ft_putchar(div, mod);
		}
		else
			write(1, &str[cnt], 1);
		cnt++;
	}
}

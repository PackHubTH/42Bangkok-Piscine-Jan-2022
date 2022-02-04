/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 20:25:35 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/18 16:59:22 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putaddr(long unsigned int n)
{
	char	buffer[12];
	int		i;
	int		x;

	i = 0;
	while (n != 0)
	{
		x = n % 16 + 48;
		if (x > 57)
			x += 39;
		buffer[i++] = x;
		n /= 16;
	}
	write(1, "0000000", 7);
	i -= 1;
	while (i >= 0)
	{
		write(1, &buffer[i], 1);
		i--;
	}
	write(1, ": ", 2);
}

void	ft_puthex(char *str, unsigned int i, unsigned int j, unsigned int size)
{
	int	div;
	int	mod;

	div = 0;
	mod = 0;
	while (j < 16 + i && j < size)
	{
		div = (str[j] - '\0') / 16 + 48;
		mod = (str[j] - '\0') % 16 + 48;
		if (mod > 57)
			mod += 39;
		write(1, &div, 1);
		write(1, &mod, 1);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
}

void	ft_putstr(char *str, unsigned int i, unsigned int j, unsigned int size)
{
	while (j < 16 + i && j < size)
	{
		if (str[j] >= 32 && str[j] <= 126)
			write(1, &str[j], 1);
		else
			write(1, ".", 1);
		j++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	long unsigned int	n;
	unsigned int		i;
	unsigned int		j;
	char				*str;

	n = (size_t)addr;
	str = addr;
	if (size != 0)
	{
		i = 0;
		while (i < size)
		{
			j = i;
			ft_putaddr(n);
			ft_puthex(str, i, j, size);
			ft_putstr(str, i, j, size);
			i += 16;
			n += 10;
		}
	}
	return (addr);
}

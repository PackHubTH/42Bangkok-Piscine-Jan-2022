/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 03:55:49 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/26 04:10:53 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int	main(void)
{
	int	a;
	int	b;

	a = 24;
	b = 42;
	printf("ft_putchar(\'A\'): ");
	ft_putchar('A');
	ft_swap(&a, &b);
	printf("\nft_swap(24, 42): a = %d, b = %d\n", a, b);
	printf("ft_putstr(\"TEST\"): ");
	ft_putstr("TEST");
	printf("\nft_strlen(\"Test42\"): len = %d\n", ft_strlen("Test42"));
	printf("ft_strcmp(\"a\", \"A\"): %d\n", ft_strcmp("a", "A"));
}

void	ft_putchar(char c)
{
	printf("%c", c);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

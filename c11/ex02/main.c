/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:09:03 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/03 12:23:06 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char *));
int	ft_check(char *str);
void	ft_test(char *str);

int	main(void)
{
	ft_test("123456789");
	ft_test("023456789");
}

int	ft_check(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '1')
			return (1);
		i++;
	}
	return (0);
}

void	ft_test(char *str)
{
	char	**tab;
	int	i;

	tab = (char **)malloc(sizeof(char *) * 11);
	i = 0;
	while (i < 10)
	{
		tab[i] = (char *)malloc(sizeof(char) * 11);
		tab[i] = str;
		i++;
	}
	printf("Input: \"%s\", check: \"1\"\n", str);
	printf("Output: %d\n\n", ft_any(tab, &ft_check));
}

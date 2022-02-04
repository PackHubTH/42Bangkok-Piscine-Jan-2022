/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 04:15:27 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/03 19:14:31 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_sort_string_tab(char **tab);
void	ft_test(void);

int	main(void)
{
	ft_test();
	return (0);
}

void	ft_test(void)
{
	char	**tab;
	int		i;

	printf("Initial: \n");
	tab = malloc(sizeof(char *) * 4);
	i = -1;
	while (++i < 4)
		tab[i] = malloc(sizeof(char) * 4);
	tab[0] = "def";
	tab[1] = "jkl";
	tab[2] = "ghi";
	tab[3] = "abc";
	i = -1;
	while (++i < 4)
	{
		printf("%s ", tab[i]);
	}
	printf("\nSorted:\n");
	ft_sort_string_tab(tab);
	i = -1;
	while (++i < 4)
	{
		printf("%s ", tab[i]);
	}
	printf("\n");
	free(tab);
}

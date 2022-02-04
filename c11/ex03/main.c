/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:34:52 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/03 19:38:24 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count_if(char **tab, int length, int (*f)(char *));
int	ft_strcmp(char *s1);
void	ft_test(int nb);

int	main(void)
{
	ft_test(5);
	ft_test(4);
	ft_test(2);
	ft_test(0);
	return (0);
}

int	ft_strcmp(char *s1)
{
	s1 = 0;
	return (1);
}

void	ft_test(int nb)
{
	int		(*ptr)(char *) = &ft_strcmp;
	int		i;
	char	**tab;

	printf("Initial: length = %d\n", nb);
	tab = (char **)malloc(sizeof(char *) * (nb + 1));
	i = 0;
	while (i < nb)
	{
		tab[i] = (char *)malloc(sizeof(char) * nb);
		tab[i] = "test";
		i++;
	}
	printf("cnt: %d\n\n", ft_count_if(tab, nb, ptr));
}

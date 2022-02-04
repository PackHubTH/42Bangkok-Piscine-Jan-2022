/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:27:58 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/26 19:55:10 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	int	ac = 2;
	char	*s1 = "test";
	char	*s2 = "42Bangkok";
	char	**av = (char **)malloc(sizeof(char *) * 2);
	av[0] = s1;
	av[1] = s2;

	struct s_stock_str	*array = ft_strs_to_tab(ac, av);

	//printf("%d %s %s\n", array[0].size, array[0].str, array[0].copy);
	ft_show_tab(array);
	return (0);
}

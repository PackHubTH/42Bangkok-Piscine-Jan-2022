/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:53:00 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/19 15:52:01 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	src[] = "Coucou\ntu vas bien ?";
	int		i;
	int		n;

	i = 0;
	n = 0;
	printf("Input:\n%s\n", src);
	printf("Output:\n");
	ft_putstr_non_printable(src);
	printf("\n");
	return (0);
}

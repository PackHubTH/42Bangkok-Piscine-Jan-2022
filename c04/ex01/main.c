/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:56:32 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/20 10:57:33 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putstr(char *str);

int	main(void)
{
	char 	*str = "test42";

	printf("Input: \"test42\"\n");
	printf("Your output:\n");
	ft_putstr(str);
	printf("\nExpected output:\ntest42\n");
	return (0);
}

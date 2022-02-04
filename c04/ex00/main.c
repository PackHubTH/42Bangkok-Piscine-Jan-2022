/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:47:00 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/20 10:53:58 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char 	*str = "test42";

	printf("Input: \"test42\"\n");
	printf("Your output: len = %d\n", ft_strlen(str));
	printf("Expected output: len = %lu\n", strlen(str));
	return (0);
}

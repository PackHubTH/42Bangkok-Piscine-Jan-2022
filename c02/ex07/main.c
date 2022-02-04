/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 01:43:17 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/17 01:49:12 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	*src;
	int		i;

	src = (char *)malloc(sizeof(char) * 7);
	i = 0;
	while (i < 6)
	{
		src[i] = 'a' + i;
		i++;
	}
	printf("Input: %s\n", src);
	src = ft_strupcase(src);
	printf("Output: %s\n\n", src);
	src[3] = '2';
	printf("Input %s\n", src);
	src = ft_strupcase(src);
	printf("Output: %s\n\n", src);
	return (0);
}

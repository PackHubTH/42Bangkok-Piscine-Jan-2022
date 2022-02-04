/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 01:51:33 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/17 01:51:57 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	*src;
	int		i;

	src = (char *)malloc(sizeof(char) * 7);
	i = 0;
	while (i < 6)
	{
		src[i] = 'A' + i;
		i++;
	}
	printf("Input: %s\n", src);
	src = ft_strlowcase(src);
	printf("Output: %s\n\n", src);
	src[3] = '2';
	printf("Input %s\n", src);
	src = ft_strlowcase(src);
	printf("Output: %s\n\n", src);
	return (0);
}

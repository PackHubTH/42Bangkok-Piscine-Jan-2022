/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:19:44 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/17 18:44:52 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[11];
	char	*dest;
	int		i;
	int		size;
	int		n;

	i = 0;
	n = 0;
	size = 5;
	dest = (char *)malloc(sizeof(char) * 15);
	src[10] = '\0';
	dest[0] = 'A';
	while (i < 10)
	{
		src[i] = 'A' + i;
		i++;
	}
	printf("src = %s\n", src);
	printf("Copy size = %d\n", size);
	n = strlcpy(dest, src, size);
	printf("dest = %s\n", dest);
	printf("n = %d\n", n);
	return (0);
}

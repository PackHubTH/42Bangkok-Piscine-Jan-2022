/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:28:31 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/19 02:22:55 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	*dest;
	int		i;

	src = (char *)malloc(sizeof(char) * 7);
	dest = (char *)malloc(sizeof(char) * 10);
	i = 0;
	while (i < 7)
	{
		src[i] = 'A' + i;
		i++;
	}
	i = 0;
	while (i < 10)
	{
		dest[i] = 'a' + i;
		i++;
	}
	printf("src = %s\n", src);
	printf("Before dest = %s\n", dest);
	dest = strcpy(dest, src);
	printf("After dest = %s\n", dest);
	return (0);
}

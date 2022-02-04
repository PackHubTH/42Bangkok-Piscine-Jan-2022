/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:28:31 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/17 00:38:05 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*src;
	int		i;
	int		ch;

	src = (char *)malloc(sizeof(char) * 7);
	i = 0;
	ch = 0;
	printf("src = %s\n", src);
	ch = ft_str_is_lowercase(src);
	printf("ch = %d\n\n", ch);
	while (i < 6)
	{
		src[i] = 'a' + i;
		i++;
	}
	printf("src = %s\n", src);
	ch = ft_str_is_lowercase(src);
	printf("ch = %d\n\n", ch);
	src[3] = 'D';
	printf("src = %s\n", src);
	ch = ft_str_is_lowercase(src);
	printf("ch = %d\n", ch);
	return (0);
}

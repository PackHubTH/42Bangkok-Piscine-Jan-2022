/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:28:31 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/16 22:42:25 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*src;
	int		i;
	int		ch;

	src = (char *)malloc(sizeof(char) * 7);
	i = 0;
	ch = 0;
	printf("src = %s\n", src);
	ch = ft_str_is_alpha(src);
	printf("ch = %d\n\n", ch);
	while (i < 6)
	{
		src[i] = 'A' + i;
		i++;
	}
	printf("src = %s\n", src);
	ch = ft_str_is_alpha(src);
	printf("ch = %d\n\n", ch);
	src[3] = '@';
	printf("src = %s\n", src);
	ch = ft_str_is_alpha(src);
	printf("ch = %d\n", ch);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:05:02 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/27 21:40:38 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);
void	ft_test(char *str, char *charset);


int	main(void)
{
	ft_test("abcdefghi", "df");
	ft_test("HELLO WORLD", " ");
	ft_test("", "abc");
	ft_test("test42", "");
	return (0);
}

void	ft_test(char *str, char *charset)
{
	char	**arr = ft_split(str, charset);
	int	i = 0;

	printf("Input: str = \"%s\", charset = \"%s\"\n", str, charset);
	while (arr[i])
	{
		printf("arr[%d]: %s\n", i, arr[i]);
		i++;
	}
	printf("arr[%d]: %s\n", i, arr[i]);
	printf("\n");
}

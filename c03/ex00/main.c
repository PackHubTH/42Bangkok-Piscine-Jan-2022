/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:12:20 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/19 17:13:39 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1 = "TEST";
	char	*s2 = "TEST42";
	int	ch1 = 0;
	int	ch2 = 0;
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	ch1 = strcmp(s1, s2);
	ch2 = ft_strcmp(s1, s2);
	printf("strcmp() = %d\nft_strcmp() = %d\n\n", ch1, ch2);
	s1 = "test42";
	s2 = "test42";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	ch1 = strcmp(s1, s2);
	ch2 = ft_strcmp(s1, s2);
	printf("strcmp() = %d\nft_strcmp() = %d\n\n", ch1, ch2);
	s1 = "test";
	s2 = "Test42";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	ch1 = strcmp(s1, s2);
	ch2 = ft_strcmp(s1, s2);
	printf("strcmp() = %d\nft_strcmp() = %d\n\n", ch1, ch2);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:12:20 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/19 17:16:45 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1 = "TEST";
	char	*s2 = "TEST42";
	int	ch1 = 0;
	int	ch2 = 0;
	int	n = 3;
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("n = %d\n", n);
	ch1 = strncmp(s1, s2, n);
	ch2 = ft_strncmp(s1, s2, n);
	printf("strncmp() = %d\nft_strncmp() = %d\n\n", ch1, ch2);
	s1 = "tEst42";
	s2 = "test42";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("n = %d\n", n);
	ch1 = strncmp(s1, s2, n);
	ch2 = ft_strncmp(s1, s2, n);
	printf("strncmp() = %d\nft_strncmp() = %d\n\n", ch1, ch2);
	s1 = "test";
	s2 = "Test42";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("n = %d\n", n);
	ch1 = strncmp(s1, s2, n);
	ch2 = ft_strncmp(s1, s2, n);
	printf("strncmp() = %d\nft_strncmp() = %d\n\n", ch1, ch2);
	return (0);
}

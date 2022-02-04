/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:28:31 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/20 13:52:20 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src = "ABCD";
	char	dest1[10] = "abcde";
	char	dest2[10] = "abcde";
	int		n;

	n = 4;
	printf("n = %d\n", n);
	printf("src: %s\n", src);
	printf("strncpy(): %s\nft_strncpy(): %s\n", strncpy(dest1, src, n), ft_strncpy(dest2, src, n));
	src = "AB";
	printf("n = %d\n", n);
	printf("src: %s\n", src);
	printf("strncpy(): %s\nft_strncpy(): %s\n", strncpy(dest1, src, n), ft_strncpy(dest2, src, n));
	src = "ABCDEF";
	printf("n = %d\n", n);
	printf("src: %s\n", src);
	printf("strncpy(): %s\nft_strncpy(): %s\n", strncpy(dest1, src, n), ft_strncpy(dest2, src, n));
	src = "";
	printf("n = %d\n", n);
	printf("src: %s\n", src);
	printf("strncpy(): %s\nft_strncpy(): %s\n", strncpy(dest1, src, n), ft_strncpy(dest2, src, n));
	return (0);
}

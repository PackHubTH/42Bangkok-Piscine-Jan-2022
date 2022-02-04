/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:02:16 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/20 10:28:09 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src1[10] = "42Bangkok";
	char	dest1[100] = "hello";
	char	dest2[100] = "hello";
	char	dest3[100] = "hello";
	char	dest4[100] = "hello";
	char	dest5[100] = "hello";
	char	dest6[100] = "hello";
	char	dest7[100] = "hello";
	char	dest8[100] = "hello";
	char	dest9[100] = "hello";
	char	dest10[100] = "hello";
	char	dest11[100] = "hello";
	char	dest12[100] = "hello";
	char	dest13[100] = "hello";
	char	dest14[100] = "hello";
	char	dest15[100] = "hello";
	char	dest16[100] = "hello";
	char	dest17[100] = "hello";
	int	n = 16;

	printf("n = %d\n", n);
	//printf("ft_strncat(): %u %s\n", ft_strlcat(dest1, src1, n), dest1);
	printf("ft_strlcat(): %u %s\n", ft_strlcat(dest1, src1, 0), dest1);
	printf("strlcat(): %u %s\n", ft_strlcat(dest2, src1, 1), dest2);
	printf("strlcat(): %u %s\n", ft_strlcat(dest3, src1, 2), dest3);
	printf("strlcat(): %u %s\n", ft_strlcat(dest4, src1, 3), dest4);
	printf("strlcat(): %u %s\n", ft_strlcat(dest5, src1, 4), dest5);
	printf("strlcat(): %u %s\n", ft_strlcat(dest6, src1, 5), dest6);
	printf("strlcat(): %u %s\n", ft_strlcat(dest7, src1, 6), dest7);
	printf("strlcat(): %u %s\n", ft_strlcat(dest8, src1, 7), dest8);
	printf("strlcat(): %u %s\n", ft_strlcat(dest9, src1, 8), dest9);
	printf("strlcat(): %u %s\n", ft_strlcat(dest10, src1, 9), dest10);
	printf("strlcat(): %u %s\n", ft_strlcat(dest11, src1, 10), dest11);
	printf("strlcat(): %u %s\n", ft_strlcat(dest12, src1, 11), dest12);
	printf("strlcat(): %u %s\n", ft_strlcat(dest13, src1, 12), dest13);
	printf("strlcat(): %u %s\n", ft_strlcat(dest14, src1, 13), dest14);
	printf("strlcat(): %u %s\n", ft_strlcat(dest15, src1, 14), dest15);
	printf("strlcat(): %u %s\n", ft_strlcat(dest16, src1, 15), dest16);
	printf("strlcat(): %u %s\n", ft_strlcat(dest17, src1, 16), dest17);
	return (0);
}

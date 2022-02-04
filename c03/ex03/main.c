/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:20:04 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/19 23:23:59 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	src1[10] = "42Bangkok";
	char	dest1[10] = "Hello ";
	int	n = 20;

	printf("n = %d\n", n);
	printf("ft_strncat(): %s\n", ft_strncat(dest1, src1, n));
	return (0);
}

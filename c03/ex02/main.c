/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:45:21 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/19 23:19:12 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src1[10] = "42Bangkok";
	char	dest1[10] = "Hello ";

	printf("ft_strcat(): %s\n", ft_strcat(dest1, src1));
	return (0);
}

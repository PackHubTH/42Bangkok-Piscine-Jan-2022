/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:25:45 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/25 19:37:43 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strjoin(int size, char **strs, char *sep);
void	ft_test(int size, char **str, char *sep);

int	main(void)
{
	char	*str[5] = {"test01", "test02", "test03", "test04", "test05"};
	ft_test(2, str, "++");
	ft_test(0, str, "++");
	ft_test(4, str, "   ");
	ft_test(5, str, " and ");
	return (0);
}

void	ft_test(int size, char **str, char *sep)
{
	char	*dest;

	printf("Input: size = %d, sep = \"%s\"\n", size, sep);
	dest = ft_strjoin(size, str, sep);
	printf("%p\n%s\n\n", dest, dest);
}

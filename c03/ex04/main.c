/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:32:32 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/19 23:48:05 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "abcTESTdef";
	char	to_find[] = "TEST";

	printf("ft_strstr(): %s\n", ft_strstr(str, to_find));
	return (0);
}

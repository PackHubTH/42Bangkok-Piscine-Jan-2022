/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 01:51:33 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/19 15:17:05 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	dest[63] = "salut, comMen, tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Input: %s\n", dest);
	printf("Output: %s\n\n", ft_strcapitalize(dest));
	return (0);
}

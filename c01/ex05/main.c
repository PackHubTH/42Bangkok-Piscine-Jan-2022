/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 04:08:44 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/16 04:17:36 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = "DamnMoulinette";
	printf("Input: \nDamnMoulinette\n\n");
	printf("Output: \n");
	ft_putstr(str);
	printf("\n");
	return (0);
}

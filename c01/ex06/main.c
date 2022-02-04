/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 04:20:18 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/16 04:24:34 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int		cnt;

	cnt = 0;
	str = "Examhell";
	cnt = ft_strlen(str);
	printf("Input: 'Examhell'\n");
	cnt = ft_strlen(str);
	printf("Output: cnt = %d\n\n", cnt);
	str = "Examshell";
	printf("Input: 'Examshell'\n");
	cnt = ft_strlen(str);
	printf("Output: cnt = %d\n", cnt);
}

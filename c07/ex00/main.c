/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 02:52:54 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/25 18:05:49 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);
void	ft_test(char *str);

int	main(void)
{
	ft_test("Test 42");
	ft_test("abcDEFghi");
	ft_test("");
	return (0);
}

void	ft_test(char *str)
{
	char	*dest;
	
	printf("Input: \"%s\"\n", str); 
	dest = ft_strdup(str);
	printf("Your output: %s\n\n", dest);
	free(dest);
}

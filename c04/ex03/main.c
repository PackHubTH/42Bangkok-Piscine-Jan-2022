/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:16:59 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/21 04:22:52 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{

	printf("Input: \"   ---++-12567ac411\"\n");
	printf("Your Output: %d\n", ft_atoi("   ---++-12567ac411"));
	printf("Expected Output: 12567\n\n");

	printf("Input: \"a   ---++-12567ac411\"\n");
	printf("Your Output: %d\n", ft_atoi("a   ---++-12567ac411"));
	printf("Expected Output: 0\n\n");

	printf("Input: \"17899   ---++-12567ac411\"\n");
	printf("Your Output: %d\n", ft_atoi("17899   ---++-12567ac411"));
	printf("Expected Output: 17899\n\n");

	printf("Input: \"-- -++-12567ac411\"\n");
	printf("Your Output: %d\n", ft_atoi("-- -++-12567ac411"));
	printf("Expected Output: 0\n\n");

	printf("Input: \"--++-12567ac411\"\n");
	printf("Your Output: %d\n", ft_atoi("--++-12567ac411"));
	printf("Expected Output: -12567\n\n");
	
	printf("Input: \"--++-012567ac411\"\n");
	printf("Your Output: %d\n", ft_atoi("--++-012567ac411"));
	printf("Expected Output: -12567\n\n");
	
	printf("Input: \"--++-a12567ac411\"\n");
	printf("Your Output: %d\n", ft_atoi("--++-a12567ac411"));
	printf("Expected Output: 0\n\n");
	return (0);
}

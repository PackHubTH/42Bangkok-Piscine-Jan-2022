/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:16:59 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/21 04:34:17 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{

	printf("Input: \"   ---++47891abc1567\", \"0123456789\"\n");
	printf("Your output: %d\n", ft_atoi_base("   ---++47891abc1567", "0123456789"));
	printf("Expected output: -47891\n\n");

	printf("Input: \" --+-mrdoc\", \"mrdoc\"\n");
	printf("Your output: %d\n", ft_atoi_base(" --+-mrdoc", "mrdoc"));
	printf("Expected output: -194\n\n");

	printf("Input: \"  --x++47891abc1567\", \"abcdef\"\n");
	printf("Your output: %d\n", ft_atoi_base("  --x++47891abc1567", "abcdef"));
	printf("Expected output: 0\n\n");

	printf("Input: \"   --addefb++47891abc1567\", \"abcdef\"\n");
	printf("Your output: %d\n", ft_atoi_base("   --addefb++47891abc1567", "abcdef"));
	printf("Expected output: 4711\n\n");

	printf("Input: \"   --addefb++47891abc1567\", \"abc def\"\n");
	printf("Your output: %d\n", ft_atoi_base("   --addefb++47891abc1567", "abc def"));
	printf("Expected output: 0\n\n");
	
	printf("Input: \"   --addefb++47891abc1567\", \"\"\n");
	printf("Your output: %d\n", ft_atoi_base("   --addefb++47891abc1567", ""));
	printf("Expected output: 0\n\n");
	
	printf("Input: \"   -2147136\\a8\", \"012345678\\a\"\n");
	printf("Your output: %d\n", ft_atoi_base("   -2147136\a8", "012345678\a"));
	printf("Expected output: -214713698\n\n");
	
	printf("Input: \"   addddddd\", \"+-+-\"\n");
	printf("Your output: %d\n", ft_atoi_base("   addddddd", "+-+-"));
	printf("Expected output: 0\n\n");
	
	printf("Input: \"   addddddd\", \"aabbcc\"\n");
	printf("Your output: %d\n", ft_atoi_base("   addddddd", "aabbcc"));
	printf("Expected output: 0\n\n");
	return (0);
}

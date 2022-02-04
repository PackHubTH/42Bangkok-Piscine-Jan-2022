/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:16:59 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/26 02:36:13 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base2(int nbr, char *base);
char	*ft_convert_base(char *str, char *base_from, char *base_to);
//int	ft_convert_base(char *str, char *base_from, char *base_to);

int	main(void)
{
	printf("Input: \"   ---++7891abc1567\", \"0123456789\", \"abcdefghij\"\n");
	printf("Your output: %s\n", ft_convert_base("   ---++7891abc1567", "0123456789", "abcdefghij"));
	printf("Expected output: -hijb\n\n");

	printf("Input: \" --+-mrdoc\", \"mrdoc\", \"mrdoc\"\n");
	printf("Your output: %s\n", ft_convert_base(" --+-mrdoc", "mrdoc", "mrdoc"));
	printf("Expected output: -rdoc\n\n");

	printf("Input: \"  --x++47891abc1567\", \"abcdef\", \"0123\"\n");
	printf("Your output: %s\n", ft_convert_base("  --x++47891abc1567", "abcdef", "0123"));
	printf("Expected output: (null)\n\n");

	printf("Input: \"   --addefb++47891abc1567\", \"abcdef\", \"poneyvif\"\n");
	printf("Your output: %s\n", ft_convert_base("   --addefb++47891abc1567", "abcdef", "poneyvif"));
	printf("Expected output: ooovf\n\n");

	printf("Input: \"   --addefb++47891abc1567\", \"abc def\", \"01\"\n");
	printf("Your output: %s\n", ft_convert_base("   --addefb++47891abc1567", "abc def", "01"));
	printf("Expected output: (null)\n\n");
	
	printf("Input: \"   --addefb++47891abc1567\", \"\", \"1234\"\n");
	printf("Your output: %s\n", ft_convert_base("   --addefb++47891abc1567", "", "1234"));
	printf("Expected output: (null)\n\n");
	
	printf("Input: \"   -2147136\\a8\", \"012345678\\a\", \"0123456789\"\n");
	printf("Your output: %s\n", ft_convert_base("   -2147136\a8", "012345678\a", "0123456789"));
	printf("Expected output: -214713698\n\n");
	
	printf("Input: \"   addddddd\", \"+-+-\", \"01\"\n");
	printf("Your output: %s\n", ft_convert_base("   addddddd", "+-+-", "01"));
	printf("Expected output: (null)\n\n");
	
	printf("Input: \"   addddddd\", \"aabbcc\", \"102\"\n");
	printf("Your output: %s\n", ft_convert_base("   addddddd", "aabbcc", "102"));
	printf("Expected output: (null)\n\n");
	return (0);
}

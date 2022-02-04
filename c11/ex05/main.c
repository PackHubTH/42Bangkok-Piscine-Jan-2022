/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:07:30 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/03 17:31:47 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

int	ft_check_opr(char *opr)
{
	if (ft_strcmp(opr, "+") == 0)
		return (0);
	if (ft_strcmp(opr, "-") == 0)
		return (1);
	if (ft_strcmp(opr, "*") == 0)
		return (2);
	if (ft_strcmp(opr, "/") == 0)
		return (3);
	if (ft_strcmp(opr, "%") == 0)
		return (4);
	return (-1);
}

void	ft_if(char **argv, int (*ptr_arr[])(int, int))
{
	int	ans;
	int	a;
	int	b;
	int	idx;

	ans = 0;
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	idx = ft_check_opr(argv[2]);
	if (idx == -1)
		write(1, "0\n", 2);
	else if (idx == 3 && b == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (idx == 4 && b == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
	{
		ans = (*ptr_arr[idx])(a, b);
		ft_putnbr(ans);
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	int	(*ptr_arr[6])(int, int);

	ptr_arr[0] = &ft_add;
	ptr_arr[1] = &ft_substract;
	ptr_arr[2] = &ft_multiply;
	ptr_arr[3] = &ft_divide;
	ptr_arr[4] = &ft_modulo;
	if (argc == 4)
		ft_if(argv, ptr_arr);
	return (0);
}

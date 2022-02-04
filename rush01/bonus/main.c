/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:33:01 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/23 19:03:45 by sharnvon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	g_n;
int	g_cn;
int	g_fcn;

//Import
//ft_basics function (5 functions)
void	insert_zero(int num[][g_n]);
void	print2d(int num[][g_n]);
void	print1d(int num[]);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
//ft_before functions (2 functions)
void	insert_before(int num[][g_n], int *constraint);
int		insert_constraint(int *constraint, char *str);
int		ft_solve(int num[][g_n], int *constraint, int row, int col);

//Test case 
//"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
int	check_len(char *str)
{
	int	input_size;

	input_size = ft_strlen(str);
	g_n = (input_size + 1) / 8;
	g_cn = (input_size + 1) / 8;
	g_fcn = (input_size + 1) / 2;
	if ((input_size + 1) % 8 == 0)
		return (1);
	ft_putstr("Error\n");
	return (0);
}

int	check_argc(int argc)
{
	if (argc == 2)
		return (1);
	ft_putstr("Error\n");
	return (0);
}

int	main(int argc, char *argv[])
{
	int	num[100][100];
	int	constraint[100];

	if (check_argc(argc) == 0)
		return (0);
	if (check_len(argv[1]) == 0)
		return (0);
	if (insert_constraint(constraint, argv[1]) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	insert_zero(num);
	insert_before(num, constraint);
	if (ft_solve(num, constraint, 0, 0))
	{
		print2d(num);
	}
	else
	{
		ft_putstr("Error\n");
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judomsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:49:32 by judomsil          #+#    #+#             */
/*   Updated: 2022/01/30 23:18:20 by judomsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <stdlib.h>

t_dictstruct	*read_file(int *size);
unsigned int	ft_get_num(char *str);
long long int	ft_check_atoi(char *str);
void			ft_putstr(char *str);
void			ft_send_key(t_dictstruct *hash_arr, unsigned int nb, int size);
void			ft_append(char *key, char *value);
int				ft_printable(char *str);

int	check_value(int argc, char **argv)
{
	if (ft_check_atoi(argv[argc - 1]) < 0)
		return (0);
	if (argc == 3)
	{
		if (ft_printable(argv[1]) == 0)
			return (0);
	}
	return (1);
}

void	ft_free_all(t_dictstruct *hash_arr)

{
	t_dictstruct	*first_hash;
	int				i;

	first_hash = &hash_arr[0];
	i = 0;
	while (first_hash != NULL)
	{
		free(first_hash);
		first_hash++;
	}
}

int	main(int argc, char **argv)

{
	unsigned int	num;
	t_dictstruct	*hash_arr;
	int				size;

	size = 0;
	if (argc < 2 || argc > 3 || check_value(argc, argv) == 0)
	{
		if (argc == 3)
			ft_putstr("Dict Error\n");
		else
			ft_putstr("Error\n");
		return (0);
	}
	else
	{
		hash_arr = read_file(&size);
		num = ft_get_num(argv[argc - 1]);
		if (argc == 2)
		{
			ft_send_key(hash_arr, num, size);
			ft_putstr("\n");
		}
		else if (argc == 3)
			ft_append(argv[2], argv[1]);
	}
}

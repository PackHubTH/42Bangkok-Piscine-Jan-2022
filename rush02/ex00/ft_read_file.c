/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:43:06 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/30 23:17:10 by judomsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "struct.h"
#include <stdio.h>
#define SIZE 4096

int				ft_strlen(char *str);
int				ft_putnbr(int nbr);
char			**ft_split(char *str, char *charset);
void			ft_putstr(char *str);
long long int	ft_check_atoi(char *str);
unsigned int	ft_get_num(char *str);
t_dictstruct	*create_hash_arr(int *key, char **value, int j);

void	get_key(int *key, char **value, char **list)
{
	int		i;
	int		j;
	char	**temp;

	i = 0;
	j = 0;
	while (list[i] != 0)
	{
		temp = ft_split(list[i], ": ");
		if (ft_check_atoi(temp[0]) >= 0)
		{
			key[j] = ft_get_num(temp[0]);
			value[j] = (char *) malloc (sizeof(char) * ft_strlen(temp[1]));
			value[j] = temp[1];
			j++;
		}
		i++;
	}
	key[j] = '\0';
	value[j] = 0;
	free(list);
}

void	ft_free(char **str)

{
	int		i;
	char	*p;

	i = 0;
	while (str[i] != 0)
	{
		p = str[i];
		free(p);
		i++;
	}
}

t_dictstruct	*read_file(int *size)
{
	int				file[2];
	char			buffer[SIZE + 1];
	int				*key;
	char			**value;
	t_dictstruct	*hash_arr;

	file[0] = open("numbers.dict", O_RDONLY);
	if (file[0] == -1)
		return (NULL);
	file[1] = read(open("numbers.dict", O_RDONLY), buffer, SIZE);
	buffer[file[1]] = '\0';
	*size = 100;
	key = malloc (sizeof(int) * (*size));
	value = malloc (sizeof(char *) * (*size));
	get_key(key, value, ft_split(buffer, "\n"));
	hash_arr = create_hash_arr(key, value, (*size));
	if (close(file[0]) == -1)
		return (NULL);
	free (key);
	free (value);
	return (hash_arr);
}

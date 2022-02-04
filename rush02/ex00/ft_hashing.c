/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharuva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:39:34 by ncharuva          #+#    #+#             */
/*   Updated: 2022/01/30 23:16:14 by judomsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "struct.h"

void	ft_putstr(char *str);

t_dictstruct	*insert(t_dictstruct *hash_arr, int key, char *value, int size)
{
	int				hash_index;
	t_dictstruct	*item;

	item = (t_dictstruct *) malloc (sizeof (t_dictstruct));
	item->value = value;
	item->key = key;
	hash_index = key % size;
	while (hash_arr[hash_index].value != NULL && hash_arr[hash_index].key != -1)
	{
		hash_index++;
		hash_index %= size;
	}
	hash_arr[hash_index] = *item;
	return (hash_arr);
}

void	search(t_dictstruct *hash_arr, int key, int size)
{
	int	hash_index;

	hash_index = key % size;
	while (hash_arr[hash_index].value != NULL)
	{
		if (hash_arr[hash_index].key == key)
		{
			ft_putstr(hash_arr[hash_index].value);
			return ;
		}
		hash_index ++;
		hash_index %= size;
	}
	ft_putstr("Dict Error\n");
}

t_dictstruct	*modify(t_dictstruct *hash_arr, int key, char *value, int size)
{
	int	hash_index;

	hash_index = key % size;
	while (hash_arr[hash_index].value != NULL)
	{
		if (hash_arr[hash_index].key == key)
		{
			hash_arr[hash_index].value = value;
			return (hash_arr);
		}
		hash_index++;
		hash_index %= size;
	}
	return (hash_arr);
}

t_dictstruct	*create_hash_arr(int *key, char **value, int size)
{
	t_dictstruct	*hash_arr;
	t_dictstruct	*res_arr;
	int				i;

	hash_arr = (t_dictstruct *) malloc (size * sizeof (t_dictstruct));
	i = 0;
	while (i < size)
	{
		insert(hash_arr, key[i], value[i], size);
		i++;
	}
	res_arr = hash_arr;
	free(hash_arr);
	return (res_arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:17:41 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/02 20:43:31 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "prototype.h"

#define SIZE 4096

int	ft_get_argument_two_m(char *str, int *total, int len)
{
	int	i;

	i = 0;
	*total = 0;
	while (str[i] && i < len - 3)
	{
		if (str[i] < 48 || str[i] > 57)
			break ;
		*total = *total * 10 + (str[i] - '0');
		i++;
	}
	return (i);
}

char	*ft_get_argument_three_m(char *character, char *str, int len)
{
	int		i;
	int		j;

	i = len - 3;
	j = 0;
	while (str[i] && i < len)
	{
		if (str[i] < ' ' || str[i] > '~')
			break ;
		character[j++] = str[i];
		i++;
	}
	character[j] = '\0';
	return (character);
}

char	*ft_get_argument_m(char *str, int len, int *total)
{
	char	*character;
	int		i;
	int		cnt;

	character = (char *)malloc(sizeof(char) * 4);
	if (character == NULL)
		return (NULL);
	i = ft_get_argument_two_m(str, &cnt, len);
	*total = cnt;
	if (i != len - 3)
	{
		free(character);
		return (NULL);
	}
	character = ft_get_argument_three_m(character, str, len);
	return (character);
}

char	*ft_read_arg_m(char *character, char *str, int *total_line)
{
	int	cnt;
	int	len_first;

	len_first = ft_len_first_line_m(str);
	if (len_first - 3 <= 0)
		return (NULL);
	character = ft_get_argument_m(str, len_first, &cnt);
	if (character == NULL)
		return (NULL);
	if (character[0] == character[1] || character[0] == character[2]
		|| character[1] == character[2])
	{
		free (character);
		return (NULL);
	}
	*total_line = cnt;
	return (character);
}

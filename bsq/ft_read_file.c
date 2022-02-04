/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:17:41 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/02 18:04:32 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "prototype.h"

#define SIZE 4096

int	ft_get_argument_two(char *buff, char *file, int *total, int len)
{
	int	i;
	int	fd;

	i = 0;
	*total = 0;
	fd = open(file, O_RDONLY);
	while (read(fd, &buff[i], 1) && i < len - 3)
	{
		if (buff[i] < 48 || buff[i] > 57)
			break ;
		*total = *total * 10 + (buff[i] - '0');
		i++;
	}
	close(fd);
	return (i);
}

char	*ft_get_argument_three(char *character, char *buff, char *file, int len)
{
	int		i;
	int		j;
	int		fd;
	char	*temp;

	fd = open(file, O_RDONLY);
	temp = (char *)malloc(sizeof(char) * (len - 2));
	j = read(fd, temp, len - 3);
	i = len - 3;
	j = 0;
	while (read(fd, &buff[i], 1) && i < len)
	{
		if (buff[i] < ' ' || buff[i] > '~')
			break ;
		character[j++] = buff[i];
		i++;
	}
	character[j] = '\0';
	close(fd);
	free(temp);
	free(buff);
	return (character);
}

char	*ft_get_argument(char *file, int len, int *total)
{
	char	*buff;
	char	*character;
	int		i;
	int		cnt;

	buff = (char *)malloc(sizeof(char) * (len + 1));
	character = (char *)malloc(sizeof(char) * 4);
	if (buff == NULL || character == NULL)
		return (NULL);
	i = ft_get_argument_two(buff, file, &cnt, len);
	*total = cnt;
	if (i != len - 3)
	{
		free(buff);
		free(character);
		return (NULL);
	}
	character = ft_get_argument_three(character, buff, file, len);
	return (character);
}

char	*ft_read_arg(char *character, char *file, int *total_line)
{
	int	cnt;
	int	fd;
	int	len_first;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (NULL);
	}
	close(fd);
	len_first = ft_len_first_line(file);
	if (len_first - 3 <= 0)
		return (NULL);
	character = ft_get_argument(file, len_first, &cnt);
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

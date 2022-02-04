/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:01:55 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/02 17:37:26 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "prototype.h"

int	ft_valid_map(char *file, int total_line, int len_board)
{
	int		fd;
	int		cnt;
	char	*buff;

	buff = (char *)malloc(sizeof(char) * (len_board + 1010));
	if (buff == NULL)
		return (0);
	fd = open(file, O_RDONLY);
	ft_get_second_line(fd, file);
	cnt = 0;
	while (read(fd, buff, len_board + 1))
	{
		if (ft_strlen(buff) != len_board || cnt >= total_line)
		{
			free(buff);
			return (0);
		}
		cnt++;
	}
	if (cnt != total_line)
		return (0);
	close(fd);
	free(buff);
	return (1);
}

int	ft_valid_two_cont(int fd, char *buff, char *character)
{
	int	i;

	i = 0;
	while (buff[i])
	{
		if (buff[i] != '\n')
		{
			if ((buff[i] != character[0] && buff[i] != character[1])
				|| buff[i] == character[2])
			{
				free(buff);
				return (0);
			}
		}
		i++;
	}
	close(fd);
	free(buff);
	return (1);
}

int	ft_valid_map_two(char *file, char *character, int line, int len_board)
{
	int		fd;
	int		read_byte;
	char	*buff;

	buff = (char *)malloc(sizeof(char) * ((len_board + 1) * line + 1000));
	if (buff == NULL)
		return (0);
	fd = open(file, O_RDONLY);
	ft_get_second_line(fd, file);
	read_byte = read(fd, buff, (len_board + 1) * line);
	buff[read_byte] = '\0';
	return (ft_valid_two_cont(fd, buff, character));
}

char	**ft_check_map(char *file, char *character, int total_line)
{
	int		len_board;
	int		fd;
	int		read_byte;
	char	*buff;
	char	**board;

	len_board = ft_len_board(file);
	if (len_board == 0)
		return (NULL);
	if (!(ft_valid_map(file, total_line, len_board)))
		return (NULL);
	if (!(ft_valid_map_two(file, character, total_line, len_board)))
		return (NULL);
	buff = (char *)malloc(sizeof(char) * (ft_get_file_size(file) * 10000));
	fd = open(file, O_RDONLY);
	ft_get_second_line(fd, file);
	read_byte = read(fd, buff, ft_get_file_size(file) * 10000);
	buff[read_byte] = '\0';
	board = ft_split(buff, "\n");
	free(buff);
	return (board);
}

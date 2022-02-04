/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:36:58 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/02 17:39:47 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

int	ft_len_first_line(char *file)
{
	int		read_byte;
	int		fd;
	char	*buff;

	buff = (char *)malloc(sizeof(char) * 50);
	if (buff == NULL)
		return (0);
	fd = open(file, O_RDONLY);
	read_byte = 0;
	while (read(fd, &buff[read_byte], 1))
	{
		if (buff[read_byte] == '\n')
			break ;
		read_byte++;
	}
	free(buff);
	close(fd);
	return (read_byte);
}

void	ft_get_second_line(int fd, char *file)
{
	char	*buff;
	int		len_first;

	buff = (char *)malloc(sizeof(char) * 50);
	if (buff == NULL)
		return ;
	len_first = ft_len_first_line(file) + 1;
	read(fd, buff, len_first);
	free(buff);
}

int	ft_len_board(char *file)
{
	int		fd;
	int		cnt;
	char	*buff;

	buff = (char *)malloc(sizeof(char) * 100100);
	if (buff == NULL)
		return (0);
	fd = open(file, O_RDONLY);
	ft_get_second_line(fd, file);
	cnt = 0;
	while (read(fd, &buff[cnt], 1))
	{
		if (buff[cnt] == '\n')
			break ;
		cnt++;
	}
	close(fd);
	free(buff);
	return (cnt);
}

int	ft_get_file_size(char *file)
{
	int		fd;
	int		read_byte;
	char	*buff;

	buff = (char *)malloc(sizeof(char) * 100100);
	if (buff == NULL)
		return (0);
	fd = open(file, O_RDONLY);
	read_byte = read(fd, buff, 100100);
	close(fd);
	free(buff);
	return (read_byte);
}

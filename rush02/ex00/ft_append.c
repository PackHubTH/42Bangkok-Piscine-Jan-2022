/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:37:08 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/30 22:50:00 by ncharuva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
void	ft_putstr(char *str);

void	ft_putstr_fd(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}

void	ft_append(char *key, char *value)
{
	int		fd;
	char	*temp;

	temp = malloc(sizeof(char));
	fd = open("numbers.dict", O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	ft_strcpy(temp, key);
	ft_strcat(temp, ": ");
	ft_strcat(temp, value);
	ft_strcat(temp, "\n");
	ft_putstr_fd(fd, temp);
	if (close(fd) == -1)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
}

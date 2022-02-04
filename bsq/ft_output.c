/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 04:08:27 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/02 17:40:03 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "prototype.h"

void	ft_print(char **board, int *pos)
{
	int	i;

	i = 0;
	while (i < pos[3])
	{
		ft_putstr(board[i]);
		ft_putstr("\n");
		free(board[i]);
		i++;
	}
	free(board);
}

void	ft_output(char **board, char *character, int *pos)
{
	int	i;
	int	j;

	i = pos[0] - pos[2] + 1;
	while (i <= pos[0])
	{
		j = pos[1] - pos[2] + 1;
		while (j <= pos[1])
		{
			board[i][j] = character[2];
			j++;
		}
		i++;
	}
	ft_print(board, pos);
}

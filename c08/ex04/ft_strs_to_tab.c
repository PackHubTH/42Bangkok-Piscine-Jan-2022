/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:44:34 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/27 02:47:46 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strcpy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (start);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *)malloc(ft_strlen(src) + 1);
	if (src == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*list;
	struct s_stock_str	*start;
	int					i;			

	list = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (list == NULL)
		return (NULL);
	start = list;
	i = 0;
	while (i < ac)
	{
		list[i].size = ft_strlen(av[i]);
		list[i].str = av[i];
		list[i].copy = ft_strdup(av[i]);
		i++;
	}
	list[i] = (struct s_stock_str){0, 0, 0};
	return (start);
}

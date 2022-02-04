/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:08:25 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/03 03:22:26 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		cnt;
	int		len;

	i = 0;
	len = 1;
	cnt = 0;
	while (i < size)
		len += ft_strlen(strs[i++]) + ft_strlen(sep);
	dest = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[cnt++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			dest[cnt++] = sep[j++];
		i++;
	}
	dest[cnt] = '\0';
	return (dest);
}

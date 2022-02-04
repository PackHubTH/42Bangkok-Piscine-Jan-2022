/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharuva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:26:13 by ncharuva          #+#    #+#             */
/*   Updated: 2022/01/30 21:39:08 by ncharuva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_wordlen(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && ft_check_sep(str[len], charset) == 0)
		len++;
	return (len);
}

int	ft_wordcnt(char *str, char *charset)
{
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;
	while (*str)
	{
		while (*str && ft_check_sep(*str, charset) == 1)
			str++;
		i = ft_wordlen(str, charset);
		str += i;
		if (i)
			cnt++;
	}
	return (cnt);
}

char	*ft_strdup(char *str, int len)
{
	char	*dest;
	char	*start;
	int		i;

	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (0);
	start = dest;
	i = 0;
	while (*str && i < len)
	{
		*dest++ = *str++;
		i++;
	}
	*dest = '\0';
	return (start);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		size;
	int		i;
	int		len;

	size = ft_wordcnt(str, charset);
	arr = (char **)malloc(sizeof(char *) * (size + 1));
	if (arr == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		while (ft_check_sep(*str, charset))
			str++;
		len = ft_wordlen(str, charset);
		arr[i] = ft_strdup(str, len);
		str += len;
		i++;
	}
	arr[size] = 0;
	return (arr);
}

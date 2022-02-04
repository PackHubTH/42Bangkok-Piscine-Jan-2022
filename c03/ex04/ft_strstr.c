/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:24:51 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/19 23:47:39 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *to_find)
{
	int	len;

	len = 0;
	while (to_find[len] != '\0')
		len++;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		len;
	int		cnt;
	char	*start;

	len = 0;
	len = ft_strlen(to_find);
	if (len == 0)
		return (str);
	cnt = 0;
	start = str;
	while (*str != '\0')
	{
		if (*str == to_find[cnt])
		{
			if (cnt == 0)
				start = str;
			cnt++;
		}
		else
			cnt = 0;
		if (cnt == len)
			return (start);
		str++;
	}
	return ((void *)0);
}

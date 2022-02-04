/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:54:53 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/21 00:06:07 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_assign(char *dest, char *src, unsigned int len, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i + len < size - 1)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		len_d;
	unsigned int		len_s;

	len_d = 0;
	len_s = 0;
	while (dest[len_d] != '\0')
		len_d++;
	while (src[len_s] != '\0')
		len_s++;
	if (size < 1)
		return (len_s + size);
	ft_assign(dest, src, len_d, size);
	if (len_d > size)
		return (len_s + size);
	else
		return (len_d + len_s);
}

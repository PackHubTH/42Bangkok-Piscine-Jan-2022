/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:10:04 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/20 02:09:48 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cnt;

	if (n == 0)
		return (0);
	cnt = 0;
	while ((*s1 != '\0' && *s2 != '\0') && cnt < n - 1)
	{
		if (*s1 != *s2)
			break ;
		cnt++;
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

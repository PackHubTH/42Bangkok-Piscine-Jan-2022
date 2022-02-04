/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:44:09 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/03 18:38:45 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		minn;
	char	*temp;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		minn = i;
		while (tab[j])
		{
			if (ft_strcmp(tab[minn], tab[j]) > 0)
				minn = j;
			j++;
		}
		temp = tab[i];
		tab[i] = tab[minn];
		tab[minn] = temp;
		i++;
	}
}

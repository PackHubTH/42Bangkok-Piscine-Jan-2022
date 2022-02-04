/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:58:37 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/04 02:27:55 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(char **a, char **b)
{
	char	*ptr;

	ptr = *a;
	*a = *b;
	*b = ptr;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		change;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		change = i;
		while (tab[j])
		{
			if (cmp(tab[change], tab[j]) > 0)
				change = j;
			j++;
		}
		ft_swap(&tab[i], &tab[change]);
		i++;
	}
}

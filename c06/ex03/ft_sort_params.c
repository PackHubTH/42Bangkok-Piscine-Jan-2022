/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:24:15 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/24 17:09:18 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

int	ft_check(int ch[], int idx, int cnt)
{
	int	i;

	i = 0;
	while (i < cnt)
	{
		if (ch[i] == idx)
			return (0);
		i++;
	}
	return (1);
}

void	ft_initial(int ch[])
{
	int	i;

	i = 0;
	while (i < 1010)
	{
		ch[i] = -1;
		i++;
	}
}

int	ft_sort(int ch[], int argc, char **argv)
{
	int	i;
	int	j;
	int	minn;

	i = 1;
	while (i < argc)
	{
		j = 1;
		minn = 1;
		while (!ft_check(ch, minn, i))
			minn++;
		while (j < argc)
		{
			if (ft_strcmp(argv[minn], argv[j]) > 0)
			{
				if (ft_check(ch, j, i))
					minn = j;
			}
			j++;
		}
		ch[i - 1] = minn;
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	ch[1010];
	int	i;
	int	j;
	int	k;

	ft_initial(ch);
	i = 0;
	i = ft_sort(ch, argc, argv);
	j = 0;
	while (j < i - 1)
	{
		k = 0;
		while (argv[ch[j]][k] != '\0')
		{
			write(1, &argv[ch[j]][k], 1);
			k++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}

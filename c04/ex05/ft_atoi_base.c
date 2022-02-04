/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:01:40 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/21 04:12:25 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isspace(char alpha)
{
	if ((alpha >= 9 && alpha <= 13) || alpha == 32)
		return (1);
	return (0);
}

int	ft_check_base(int len, char *base)
{
	int	idx;

	while (base[len] != '\0')
	{
		idx = len + 1;
		while (base[idx] != '\0')
		{
			if (base[len] == base[idx])
				return (0);
			idx++;
		}
		if (base[len] == '+' || base[len] == '-' || ft_isspace(base[len]))
			return (0);
		len++;
	}
	return (len);
}

int	ft_convert(char *buffer, int len, int len_base)
{
	int	sum;
	int	pow;
	int	i;

	sum = 0;
	pow = 1;
	i = 0;
	while (i < len - 1)
	{
		pow *= len_base;
		i++;
	}
	i = 0;
	while (i < len)
	{
		sum += (buffer[i] - '0') * pow;
		pow /= len_base;
		i++;
	}
	return (sum);
}

int	ft_compare_base(char *str, char *buffer, char *base)
{
	int	i;
	int	j;
	int	ch;

	i = 0;
	while (*str != '\0')
	{
		j = 0;
		ch = 0;
		while (base[j] != '\0')
		{
			if (base[j] == *str)
			{
				buffer[i++] = j + 48;
				ch = 1;
			}
			j++;
		}	
		if (!ch)
			break ;
		str++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int		num;
	int		sign;
	int		len_base;
	int		len_num;
	char	buffer[1010];

	num = 0;
	sign = 1;
	len_base = 0;
	len_base = ft_check_base(len_base, base);
	if (len_base == 0 || len_base == 1)
		return (0);
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	len_num = ft_compare_base(str, buffer, base);
	num = ft_convert(buffer, len_num, len_base);
	num *= sign;
	return (num);
}

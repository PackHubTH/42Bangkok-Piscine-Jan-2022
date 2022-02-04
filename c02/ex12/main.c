/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 20:27:28 by aardrit           #+#    #+#             */
/*   Updated: 2022/01/18 17:01:05 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	*str = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	void	*temp;
	size_t	size;

	size = (size_t)str;
	temp = ft_print_memory(str, 92);
	return (0);
}

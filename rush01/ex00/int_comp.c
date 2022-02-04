/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_comp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 08:58:34 by kboonchu          #+#    #+#             */
/*   Updated: 2022/01/23 20:40:00 by sharnvon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef enum e_cal_type{norm,rev}	t_ctyp;

int	comp(int i, int lb, int ub, t_ctyp ct)
{
	if (ct == norm)
		return (i < ub);
	else
		return (i >= lb);
}

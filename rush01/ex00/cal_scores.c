/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_scores.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonchu <marvin@g_cn2.fr>                    +#+  +:+       +#+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:38:05 by kboonchu          #+#    #+#             */
/*   Updated: 2022/01/23 20:38:06 by sharnvon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	g_cn;
int	g_fcn;
typedef enum e_cal_type{norm,rev}	t_ctyp;

int	score_top_down(int board[g_cn][g_cn], int col, t_ctyp ct);
int	score_left_right(int board[g_cn][g_cn], int row, t_ctyp ct);
int	check_complete(int num[g_cn][g_cn], int expct[g_fcn], int scores[g_fcn]);
int	check_relax(int num[g_cn][g_cn], int expct[g_fcn], int scores[g_fcn]);
int	comp(int i, int lb, int ub, t_ctyp ct);

int	check_relax(int num[g_cn][g_cn], int expct[g_fcn], int scores[g_fcn])
{
	int	j;

	j = 0;
	while (j < g_fcn)
	{
		if (j < g_cn)
			scores[j] = score_top_down(num, j, norm);
		else if (j >= g_cn && j < g_cn * 2)
			scores[j] = score_top_down(num, j - g_cn, rev);
		else if (j >= 2 * g_cn && j < g_cn * 3)
			scores[j] = score_left_right(num, j - g_cn * 2, norm);
		else
			scores[j] = score_left_right(num, j - g_cn * 3, rev);
		j++;
	}
	j = 0;
	while (j < g_cn * 4)
	{
		if (scores[j] > expct[j])
			return (0);
		j++;
	}
	return (1);
}

int	check_complete(int num[g_cn][g_cn], int expct[g_fcn], int scores[g_fcn])
{
	int	j;

	j = 0;
	while (j < g_fcn)
	{
		if (j < g_cn)
			scores[j] = score_top_down(num, j, norm);
		else if (j >= g_cn && j < g_cn * 2)
			scores[j] = score_top_down(num, j - g_cn, rev);
		else if (j >= 2 * g_cn && j < g_cn * 3)
			scores[j] = score_left_right(num, j - g_cn * 2, norm);
		else
			scores[j] = score_left_right(num, j - g_cn * 3, rev);
		j++;
	}
	j = 0;
	while (j < g_cn * 4)
	{
		if (scores[j] != expct[j])
			return (0);
		j++;
	}
	return (1);
}

int	score_top_down(int board[g_cn][g_cn], int col, t_ctyp ct)
{
	int	i;
	int	max_so_far;
	int	score;
	int	inc;

	score = 0;
	max_so_far = 0;
	i = 0;
	inc = 1;
	if (ct == rev)
		i = g_cn - 1;
	if (ct == rev)
		inc = -1;
	while (comp(i, 0, g_cn, ct))
	{
		if (board[i][col] > max_so_far && board[i][col] != 48)
			score++;
		if (board[i][col] > max_so_far)
			max_so_far = board[i][col];
		i += inc;
	}
	return (score);
}

int	score_left_right(int board[g_cn][g_cn], int row, t_ctyp ct)
{
	int	i;
	int	max_so_far;
	int	score;
	int	inc;

	score = 0;
	max_so_far = 0;
	i = 0;
	inc = 1;
	if (ct == rev)
		i = g_cn - 1;
	if (ct == rev)
		inc = -1;
	while (comp(i, 0, g_cn, ct))
	{
		if (board[row][i] > max_so_far && board[row][i] != 48)
			score++;
		if (board[row][i] > max_so_far)
			max_so_far = board[row][i];
		i += inc;
	}
	return (score);
}

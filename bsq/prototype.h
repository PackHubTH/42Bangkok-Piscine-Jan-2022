/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototype.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aardrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:07:50 by aardrit           #+#    #+#             */
/*   Updated: 2022/02/02 20:56:22 by aardrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPE_H
# define PROTOTYPE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

void	ft_free(int **num, int total_line);
void	ft_get_second_line(int fd, char *file);
void	ft_output(char **board, char *character, int *pos);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_check_map_m(char **board, char *character, int total_line);
int		*ft_find_ans(char *file, int **num, int total_line);
int		*ft_find_ans_m(char **board, int **num, int total_line);
int		ft_get_file_size(char *file);
int		ft_len_board(char *file);
int		ft_len_first_line(char *file);
int		ft_len_first_line_m(char *str);
int		**ft_solve(char **board, char *character, int total_line);
int		ft_strlen(char *str);
char	**ft_check_map(char *file, char *character, int total_line);
char	*ft_read_arg(char *character, char *file, int *total_line);
char	*ft_read_arg_m(char *character, char *str, int *total_line);
char	*ft_scanf_first(void);
char	**ft_split(char *str, char *charset);

#endif

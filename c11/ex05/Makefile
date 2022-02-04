# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aardrit <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 15:13:16 by aardrit           #+#    #+#              #
#    Updated: 2022/02/04 02:12:56 by aardrit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_calculate.c ft_atoi.c ft_putnbr.c
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= do-op
OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):
	@echo "\no----- Result $(notdir $(CURDIR)) --------o\n";
	$(CC) $(CFLAGS) *.c -o $(NAME);
	@echo ""

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

norm:
	@echo "\n----- Norminette $(notdir $(CURDIR)) ------\n";
	norminette -R CheckForbiddenSourceHeader *.c; 
	norminette -R CheckDefine *.h;
	@echo "";
	@echo "o--------------------------o";

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all clean

.PHONY:	all build norm fclean clean re

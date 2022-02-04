# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aardrit <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 15:13:16 by aardrit           #+#    #+#              #
#    Updated: 2022/01/30 23:13:58 by aardrit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE	= srcs/
SRCS = ft_strcat.c ft_strcpy.c ft_check_atoi.c ft_get_num.c ft_printable.c  ft_strlen.c split.c srcs_header.c
OBJS	= ${addprefix ${SOURCE},${SRCS:.c=.o}}
HEAD	= includes
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	lib build checkNorm

${NAME}:	${OBJS}
	ar -rc ${NAME} ${OBJS} && ranlib ${NAME}

lib:	${NAME}

build:
	@echo "\no----- Result $(notdir $(CURDIR)) --------o\n";
	gcc -Wall -Wextra -Werror -L. -lft *.c -o rush-02;

checkNorm:
	@echo "\n----- Norminette $(notdir $(CURDIR)) ------\n";
	norminette -R CheckForbiddenSourceHeader *.c srcs/*.c; 
	@echo "";
	@echo "o--------------------------o";

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}
	rm -f rush-02

re:	fclean all

.PHONY:	all clean fclean re

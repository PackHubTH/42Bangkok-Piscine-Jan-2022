# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aardrit <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 15:13:16 by aardrit           #+#    #+#              #
#    Updated: 2022/02/02 17:00:16 by aardrit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
FILE	= example_file
OUTPUT	= bsq

all:	$(OUTPUT)

$(OUTPUT):
	@echo "\no----- Result $(notdir $(CURDIR)) --------o\n";
	$(CC) $(CFLAGS) *.c -o $(OUTPUT);
	@echo ""

leak:
	leaks --atExit -- ./$(OUTPUT) $(FILE)

norm:
	@echo "\n----- Norminette $(notdir $(CURDIR)) ------\n";
	norminette -R CheckForbiddenSourceHeader *.c; 
	norminette -R CheckDefine *.h;
	@echo "";
	@echo "o--------------------------o";

clean:
	rm -f $(OUTPUT)

re:	clean all

.PHONY:	all build norm leak clean re

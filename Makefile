# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romasant <romasant@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/05 18:36:20 by romasant          #+#    #+#              #
#    Updated: 2026/08/05 20:02:02 by romasant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLEAR= clear
CC= cc
CFLAGS= -Wall -Wextra -Werror -g
RM= rm -f
SRCS = srcs/*.c
NAME= a.out

all:
	$(CLEAR)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "build all XD"

clean:
	$(CLEAR)
	@$(RM) *.o
	@echo "GOOD : clean all .o"

fclean:
	$(CLEAR)
	@$(RM) *.o $(NAME)
	@echo "GOOD : clean all .o & a.out"

re: fclean all
	clear
	@echo "GOOD : clean & rebuild"

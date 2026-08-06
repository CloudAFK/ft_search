# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romasant <romasant@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/05 18:36:20 by romasant          #+#    #+#              #
#    Updated: 2026/08/06 17:59:10 by romasant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= cc
CFLAGS= -Wall -Wextra -Werror -g
RM= rm -f
SRCS = srcs/*.c
NAME= a.out

all:
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "build all XD"

clean:
	@$(RM) *.o
	@echo "GOOD : clean all .o"

fclean:
	@$(RM) *.o $(NAME)
	@echo "GOOD : clean all .o & a.out"

re: fclean all
	@echo "GOOD : clean & rebuild"

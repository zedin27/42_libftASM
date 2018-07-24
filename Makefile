# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/24 14:56:51 by ztisnes           #+#    #+#              #
#    Updated: 2018/07/24 15:06:48 by ztisnes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
# COLORS                                                                       #
################################################################################

RES = \033[0m
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
LCYAN = \033[1;36m
CYAN = \033[1;34m
PURPLE = \033[0;35m

################################################################################
# INITIAL FORMAT OR COMPILATION                                                #
################################################################################

CC		= gcc
FLAGS	= -Ofast -Wextra -Wall -Werror
LIB		= libft.a
NAME	= ft_ssl
LINK	= -L 42_libft/ -l ft
INC		= -I inc/ -I 42_libft/libft.h
SRC		= $(wildcard *.s)
SRCDIR	= src/
OBJS	= $(patsubst %, %.o, $(addprefix $(SRCDIR), $(SRC)))

SRC		= main \

################################################################################
# RULES                                                                        #
################################################################################

all: $(LIB) $(NAME)
	@ echo "😇$(LCYAN) $(NAME) is made now$(RES) 😇"
	@echo "I like to eat dog shit"


$(NAME): $(OBJS)
	@ $(CC) $(FLAGS) $(INC) $(OBJS) $(LINK) -o $(NAME)

%.o: %.c
	@ echo "⚠️$(YELLOW)Bob the builder🎶 $<...$(RES)"
	@ $(CC) $(FLAGS) $(INC) -c $< -o $@

clean:
	/bin/rm -f src/*.o
	/bin/rm -f $(OBJSRC)
	make clean -C 42_libft/

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f 42_libft/$(LIB)
	@ echo "👺$(RED) ALL Binaries gone!$(RES) 👺"
	@ echo "$(GREEN) EATING  DOG SHIT $(GREEN)"

re: fclean all
	@ echo "$(GREEN)♻️ Program remade completed ♻️$(RES)"

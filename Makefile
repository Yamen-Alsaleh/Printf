# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/14 14:20:11 by yalsaleh          #+#    #+#              #
#    Updated: 2025/12/22 17:58:03 by yalsaleh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libftprintf.a
CC	:= cc
CFLAGS	:= -Wall -Wextra -Werror -I.
AR	:= ar rcs
RM	:= rm -f

#-----------------
#	FILES
#-----------------
SRCS	:= ft_c_print.c ft_p_print.c ft_u_print.c ft_id_print.c \
		ft_printf.c ft_s_print.c ft_x_print.c
OBJS	:= $(SRCS:.c=.o)

#----------------------------
#	colors for design ^_^
#----------------------------
BLUE	:= $$(printf "\033[34m")
GREEN	:= $$(printf "\033[32m")
YELLOW	:= $$(printf "\033[33m")
RED	:= $$(printf "\033[31m")
RESET	:= $$(printf "\033[0m")

#----------------------------
#	COMMANDS FOR MAKE
#----------------------------
.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $@ $^
	@echo "$(GREEN)[OK]$(RESET) $(NAME) created"

%.o: %.c ft_printf.h
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(BLUE)[CC]$(RESET) $<"

clean:
	@$(RM) $(OBJS)
	@echo "$(YELLOW)[OK]$(RESET) objects removed"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)[OK]$(RESET) $(NAME) removed"

re: fclean all

bonus: all

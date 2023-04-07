# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 09:45:28 by apeposhi          #+#    #+#              #
#    Updated: 2023/04/06 16:50:48 by apeposhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AUTHORS		=	apeposhi
DATE		=	$$(date +%Y/%m/%d)

VPATH 		= 	src

CC 			= 	cc
CFLAGS 		= 	-Wall -Wextra -Werror -g
INCFLAGS 	= 	-I include -I libft
AR 			= 	ar
ARFLAGS 	= 	-rcs

NAME 		= 	push_swap
SRC 		= 	$(addprefix src/, push_swap.c operations.c)
OBJ 		= 	$(addprefix obj/, $(notdir $(SRC:.c=.o)))
LIBFT		=	libft
LIBFT_NAME	=	libft.a

$(NAME): $(OBJ)
	@make -C $(LIBFT)
	$(CC) -o $(NAME) $(CFLAGS) $(INCFLAGS) $(OBJ)

obj:
	mkdir obj

obj/%.o: %.c | obj
	$(CC) -c $(CFLAGS) $(INCFLAGS) $< -o $@

san: CFLAGS += -fsanitize=address

san: re

clean:
	@make clean -C $(LIBFT)
	@rm -f $(OBJ)

fclean: clean
	@make fclean -C $(LIBFT)
	@rm -f $(NAME)

re: fclean all

all: $(NAME)

.PHONY: clean fclean re all run
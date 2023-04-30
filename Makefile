# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 09:45:28 by apeposhi          #+#    #+#              #
#    Updated: 2023/04/30 11:56:12 by apeposhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AUTHORS		=	apeposhi
NAME		= 	push_swap

CC			=	cc
CFLAGS 		=	-Wall -Wextra -Werror
INC			=	-I ./include/

LIBFT_PATH	 =	libft/
LIBFT_NAME	 =	libft.a
LIBFT		 =	$(LIBFT_PATH)$(LIBFT_NAME)

SRC_PATH =	src/
OBJ_PATH =	obj/

SRC		 =  main.c operations.c more_operations.c utils_args.c utils_functions.c utils_init.c utils_list_functions.c utils_sort.c radix.c sort_stacks.c

SRCS 	=	$(addprefix $(SRC_PATH), $(SRC))
OBJS 	=	${SRCS:${SRC_PATH}%.c=${OBJ_PATH}%.o}

$(NAME): $(LIBFT) $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LIBFT) $(LFLAGS)

$(OBJ_PATH)%.o:$(SRC_PATH)%.c ./include/push_swap.h
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

$(LIBFT):
	$(MAKE) -sC $(LIBFT_PATH)

all: $(NAME)

clean:
	rm -rdf $(OBJ_PATH)
	$(MAKE) clean -C $(LIBFT_PATH)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT_PATH)$(LIBFT_NAME)

re: fclean all

bonus: all

.PHONY: all clean fclean re
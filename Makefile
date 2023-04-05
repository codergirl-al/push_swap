# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 09:45:28 by apeposhi          #+#    #+#              #
#    Updated: 2023/04/05 18:44:42 by apeposhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AUTHORS		=	apeposhi
DATE		=	$$(date +%Y/%m/%d)

CC			=	cc
CFLAGS		=	-Werror -Wextra -Wall

NAME 		=	push_swap

SRC_DIR		=	src/
OBJ_DIR		=	obj/
INC_DIR		=	include/
LIBFT		=	libft/libft.a

SRC_NAME	=	main operations
INC_NAME	=	push_swap

SRC_FILES	=	$(addsuffix .c, $(addprefix $(SRC_DIR), $(SRC_NAME)))
OBJ_FILES	=	$(addsuffix .o, $(addprefix $(OBJ_DIR), $(SRC_NAME)))
INC_FILES	=	$(addsuffix .h, $(addprefix $(INC_DIR), $(INC_NAME)))

all : $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -I $(INC_DIR)
#
$(NAME) : $(OBJ_DIR) $(OBJ_FILES) $(INC_FILES) 
	@make -C ./libft
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME) -I $(INC_DIR)

clean:
	cd libft && make clean
	@rm -rf $(OBJ_DIR)

fclean: clean
	cd libft && make fclean
	@rm -f $(NAME) .header

re: fclean all
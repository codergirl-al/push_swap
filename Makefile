 AUTHORS		=	apeposhi
DATE		=	$$(date +%Y/%m/%d)

CC			=	cc
CFLAGS		=	-Werror -Wextra -Wall

NAME 		=	push_swap

SRC_DIR		=	src/
OBJ_DIR		=	obj/
INC_DIR		=	include/
LIBFT		=	libft/libft.a

SRC_NAME	=	main
INC_NAME	=	so_long

SRC_FILES	=	$(addsuffix .c, $(addprefix $(SRC_DIR), $(SRC_NAME)))
OBJ_FILES	=	$(addsuffix .o, $(addprefix $(OBJ_DIR), $(SRC_NAME)))
INC_FILES	=	$(addsuffix .h, $(addprefix $(INC_DIR), $(INC_NAME)))

ifeq ($(shell uname -s),Linux)
	OS := Linux
	LIB	=	-ldl -lglfw -pthread -lm
else ifeq ($(shell uname -s),Darwin)
	OS := MacOS
	LIB		=	-framework Cocoa -framework OpenGL -framework IOKit -lglfw -L ~/.brew/opt/glfw/lib/
else
	OS := Unknown
	exit 1
endif

$(info Compiling for $(OS))

all : $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -I$(INC_DIR)
#
$(NAME) : $(OBJ_DIR) $(OBJ_FILES) $(INC_FILES) 
	@make -C ./libft
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME) $(LIB) -I$(INC_DIR)

clean:
	cd libft && make clean
	@rm -rf $(OBJ_DIR)

fclean: clean
	cd libft && make fclean
	@rm -f $(NAME) .header

re: fclean all
NAME      = exercicios
CC        = cc
CFLAGS    = -Wall -Wextra -Werror
INCLUDE   = inc/exs1.h
SRC_DIR   = ./src
OBJ_DIR   = ./obj

SRCS = ex1.c\
		ex2.c\
		ex3.c\
		ex4.c\
		ex5.c\
		ex6.c\
		ex7.c\
		ex8.c\
		calculadora.c\
		main.c\
		ex9.c\
		ex10.c\
		ex11.c\


OBJ = $(addprefix $(OBJ_DIR)/,$(notdir $(SRCS:.c=.o)))

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ) $(INCLUDE)
	@$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDE)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)
	@rm -f a.out	
re: fclean all

.PHONY: all clean fclean re
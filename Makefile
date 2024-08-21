# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 15:53:16 by hshi-yun          #+#    #+#              #
#    Updated: 2024/08/21 20:30:55 by hshi-yun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT = ./libft

SRC = ft_printf.c ft_printchar.c ft_printstr.c ft_printnbr.c ft_print_unsigned_int.c ft_print_hexadecimal.c ft_print_pointer.c ft_print_no_specifier.c ft_print_percent.c ft_print_exception.c
OBJ = $(SRC:.c=.o)

all: $(NAME)


$(NAME) : $(OBJ)
	@echo ">>>Compiling sublibraries $(LIBFT): "
	$(MAKE) -C $(LIBFT)
	cp $(LIBFT)/libft.a $(NAME)
	@echo ">>> Starting background processing and indexing of files into lib: "
	ar rcs $(NAME) $(OBJ)
	@echo ">>> Processing and indexing completed."

%.o : %.c
	@echo ">>> Compiling .c files to .o files"
	$(CC) $(CFLAGS) -c -o $@ $^

norminette:
	@echo ">>> Checking norminette for all files"
	norminette -R CheckForbiddenSourceHeader $(SRC)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT) clean

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

test: $(NAME) test.c
	@echo ">>> Running test files"
	$(CC) $(CFLAGS) -o test test.c libftprintf.a
	@./test


.PHONY: all norminette clean fclean re bonus test

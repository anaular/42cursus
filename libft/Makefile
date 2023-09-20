# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaular <anaular@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 17:53:41 by anaular           #+#    #+#              #
#    Updated: 2023/09/20 18:59:23 by anaular          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs 
RM = rm -f 

CC = gcc			 
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_strlen.c ft_strlcpy.c\
ft_memset.c ft_bzero.c ft_memcpy.c


OBJ = $(SRC:.c=.o)
INCLUDE = libft.h


all: $(NAME)
	@echo "Todo OK!"

$(NAME): $(OBJ) $(INCLUDE)
	@$(LIB) $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $^

norma:	$(SRC)
	norminette $(SRC)
normx:	$(INCLUDE)
	@norminette -R CheckForbiddenSourceHeader $(INCLUDE)
test: main.c $(NAME)
	@$(CC) $(CCFLAGS) main.c $(NAME) && ./a.out

clean:
	@rm -f $(OBJ)
	@echo "Borrado todos los .o"
fclean: clean
	@$(RM) $(OBJ) $(NAME)
	@echo " Borrado todos los .o y $(NAME)"
re: fclean all
	@echo " Borrado todo y creado el $(NAME)"
.PHONY: norma test clean fclean re all

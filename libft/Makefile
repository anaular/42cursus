# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaular <anaular@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 17:53:41 by anaular           #+#    #+#              #
#    Updated: 2023/10/14 19:48:29 by anaular          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs 
RM = rm -f 

CC = gcc			 
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_atoi.c\
ft_putnbr_fd.c ft_putendl_fd.c\
ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c\
ft_putstr_fd.c ft_strmapi.c ft_memcmp.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c\
ft_putchar_fd.c ft_striteri.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_itoa.c


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
	@$(RM) $(OBJ)
	@echo "Borrado todos los .o"
fclean: clean
	@$(RM) $(NAME)
	@echo " Borrado todos los .o y $(NAME)"
re: fclean all
	@echo " Borrado todo y creado el $(NAME)"
.PHONY: norma test clean fclean re all

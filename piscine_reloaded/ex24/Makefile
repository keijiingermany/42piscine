# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/17 08:02:30 by kuehara           #+#    #+#              #
#    Updated: 2024/10/17 14:51:54 by kuehara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC =   ./srcs/ft_putchar.c \
		./srcs/ft_putstr.c \
		./srcs/ft_strcmp.c \
		./srcs/ft_strlen.c \
		./srcs/ft_swap.c
OBJ = $(SRC:.c=.o)
HEAD = ./includes/

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I $(HEAD) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)
		rm -f $(HEAD)/*.gch
re: fclean all

.PHONY: all clean fclean re
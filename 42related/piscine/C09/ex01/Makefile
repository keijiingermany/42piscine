CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = includes
LIBFT = libft.a
SRC_DIR = srcs
SRC_FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS = ${addprefix $(SRC_DIR)/, $(SRC_FILES)}
OBJS = ${SRCS:.c=.o}
AR = ar rcs
RANLIB = ranlib
RM = rm -f

all: ${LIBFT}

${LIBFT}: ${OBJS}
	${AR} ${LIBFT} ${OBJS}
	${RANLIB} ${LIBFT}
.c.o:
	${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${LIBFT}

re: fclean all

.PHONY: all clean fclean re

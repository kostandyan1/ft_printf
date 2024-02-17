NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRCS = print_char.c print_hex.c print_int.c print_ptr.c print_string.c print_unsigned.c ft_printf.c

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS} printf.h Makefile
	ar rcs ${NAME} ${OBJS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean ${NAME}

.PHONY: all clean fclean re

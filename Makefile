NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I./include
AR = ar
ARFLAGS = rcs

SRC = src/ft_printf.c \
		src/ft_putchar.c \
		src/ft_putstr.c \
		src/ft_print_nbr.c \
		src/ft_print_unsigned_dec.c \
		src/ft_dec_to_hex.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)	

re: fclean all

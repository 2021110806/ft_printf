CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
LIBFT = ./libft/libft.a
LIBFT_DIR = libft
SRCS = ft_printf.c print_value.c print_hex.c
OBJS = ft_printf.o print_value.o print_hex.o

.PHONY : clean fclean re all bonus

all: $(NAME)

clean:
	make -C $(LIBFT_DIR) fclean
	rm -f $(OBJS)

fclean:
	$(MAKE) clean
	rm -f $(NAME)
re:
	$(MAKE) fclean
	$(MAKE) all

$(NAME): $(LIBFT)  $(OBJS)
	cp $(LIBFT) ./$(NAME)
	ar crs $@ $^

$(LIBFT):
	make -C $(LIBFT_DIR) all

%.o: %.c
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c -o $@ $?

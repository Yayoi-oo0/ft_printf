CC  = gcc
CFLAGS    = -Wall -Wextra -Werror
NAME    = libftprintf.a
SRCS    = ft_printf.c \
		ft_check.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putunbr.c \
		ft_puthex.c \
		ft_putptr.c \
		ft_putchar.c \
		ft_itoa_base.c  

REG_OBJ_FILES = $(SRCS:.c=.o)

OBJS    = $(REG_OBJ_FILES)

all: $(NAME)
$(NAME): $(OBJS)
	$(MAKE) -C libft/
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)
%.o : %.c
	$(CC) $(CFLAGS) -c $^ -o $@
clean:
	make fclean -C libft/
	rm -f $(OBJS)
fclean:clean
	rm -f $(NAME)
re: fclean all
.PHONY: clean all fclean re
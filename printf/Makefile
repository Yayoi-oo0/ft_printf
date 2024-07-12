CC  = gcc
CFLAGS    = -Wall -Wextra -Werror -Iincludes
NAME    = libftprintf.a
SRCS    = ft_printf.c \
		ft_check.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putunbr.c \
		ft_puthex.c \
		ft_putptr.c

REG_OBJ_FILES = $(SRCS:.c=.o)

OBJS    = $(REG_OBJ_FILES)

all: $(NAME)
$(NAME): $(OBJS)
	$(MAKE) -C libft
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)
%.o : %.c
	$(CC) $(CFLAGS) -c $^ -o $@
clean:
	rm -f $(OBJS)
fclean:clean
	rm -f $(NAME)
.PHONY: clean all fclean re
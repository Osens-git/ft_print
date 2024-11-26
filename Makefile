NAME = libftprintf.a

MY_SOURCES = hex_to_itoa.c \
			putcharstr.c \
			struct.c \
			fts.c \
			itoa.c \
			ft_printf.c \
			flag_dash.c \
			flag_dash_length.c \
			flag_nb.c \
			flag_point.c \
			flag_point_length.c \
			flag_zero.c \
			flag_zero_length.c \
			flag_hashtag.c \
			flag_space.c \
			flag_plus.c \
			flag_combo.c \
			flag_combo_ht.c \
			flag_combo_plus.c \
			flag_combo_space.c \
			flag.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

MY_OBJECTS_BONUS = $(MY_OBJECTS)

LIBFT = libft/libft.a

all : $(LIBFT) $(NAME) 

$(LIBFT) :
	$(MAKE) bonus -C libft

$(NAME) : $(MY_OBJECTS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(MY_OBJECTS)

.c.o :
	cc -Wall -Werror -Wextra -I ./ -c $< -o ${<:.c=.o}

clean :
	$(MAKE) clean -C libft
	rm -rf $(LIBFT)
	rm -f $(MY_OBJECTS) $(MY_OBJECTS_BONUS)

fclean : clean
	rm -f libft/libft.a
	rm -f $(NAME)

re	: fclean all

bonus : $(LIBFT) $(NAME) $(MY_OBJECTS_BONUS)
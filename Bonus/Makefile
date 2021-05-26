SRCS = ft_bitmap.c \
	draw_floors.c \
	errors.c \
	ft_bzero.c \
	ft_memset.c \
	get_next_line_utils.c \
	get_next_line.c init.c \
	levels.c \
	main.c \
	movement.c \
	parser.c \
	render_extras.c \
	render_support_1.c \
	render.c \
	set_textures.c \
	sprites.c  \
	utils.c \
	left_right.c \
	keys.c \
	sort.c \
	utils_libft.c \
	colors_utils.c \
	parser_utils_1.c \
	parser_utils_2.c \
	parser_utils_3.c \
	parser_utils_4.c \
	map_finder.c \
	mouse_move.c \
	init_player.c

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f

CFLAGS  = -Lmlx -lmlx -framework OpenGL -framework AppKit -Wall -Wextra -Werror
NAME			= cub3D

%.o : %.c
	$(CC)  -c -o $@ $<

all:		compile_lib $(NAME)

$(NAME):		 $(OBJS)
					$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

welcome:
	bash welcome.sh


compile_lib:
	make -C ./mlx && cp ./mlx/libmlx.dylib ./

bonus: all

clean:
				make clean -C ./mlx
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME) rm libmlx.dylib

re:				fclean $(NAME)

.PHONY:			all clean fclean re

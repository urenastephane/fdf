#***************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: surena <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/22 20:05:19 by surena            #+#    #+#              #
#    Updated: 2017/02/22 22:05:55 by surena           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	fdf
CC		:=	clang
CFLAGS	:=	-g -Wall -Wextra -Werror
SRCDIR	:=	src/
OBJDIR	:=	obj/
INCDIR	:=	include/
LIBDIR	:=	libft/
SRC			:=	$(SRCDIR)main.c\
			$(SRCDIR)get_next_line.c\
			$(SRCDIR)ft_init.c\
			$(SRCDIR)ft_size_grid.c\
			$(SRCDIR)ft_create_window.c\
			$(SRCDIR)ft_check_keycode.c\
			$(SRCDIR)ft_create_image.c\
			$(SRCDIR)ft_parse.c\
			$(SRCDIR)ft_zoom.c\
			$(SRCDIR)ft_proj_cav.c\
			$(SRCDIR)ft_proj_iso.c\
			$(SRCDIR)ft_proj_grid.c\
			$(SRCDIR)ft_tab_to_str.c\
			$(SRCDIR)ft_refresh_image.c\
			$(SRCDIR)ft_translate_image.c\
			$(SRCDIR)ft_find_origin.c\
			$(SRCDIR)ft_labels.c\
			$(SRCDIR)ft_draw_seg.c\
			$(SRCDIR)ft_change_alt.c\
			$(SRCDIR)ft_close.c
OBJ		:=	$(SRC:$(SRCDIR)%.c=$(OBJDIR)%.o)
INC		:=	-I./$(INCDIR) -I./$(LIBDIR) -I./minilibx
LIBPATH	:=	-L./$(LIBDIR) -lft
CACHEF	:=	.cache_exists
CLEAR		= "\033[2K"
UP			= "\033[A"
EOC			= "\033[0;0m"
BLACK		= "\033[0;30m"
RED			= "\033[0;31m"
GREEN		= "\033[0;32m"
YELLOW		= "\033[0;33m"
BLUE		= "\033[0;34m"
PURPLE		= "\033[0;35m"
CYAN		= "\033[0;36m"
WHITE		= "\033[0;37m"
.PHONY: all libft norme clean fclean re
.SILENT:

all: $(NAME)

$(NAME): libft $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@ -lmlx -framework OpenGL -framework AppKit $(LIBPATH) $(INC)
	printf $(PURPLE)"\n✓ $@ done\n"$(EOC)

$(OBJDIR)%.o: $(SRCDIR)%.c $(CACHEF)
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(CACHEF):
	test -d $(OBJDIR) || mkdir $(OBJDIR)
	test -d $(CACHEF) || touch $(CACHEF)

%.c:
	printf $(RED)"Missing file : $@\n"$(EOC)

libft:
	make -C $(LIBDIR)

clean:
	make -C $(LIBDIR) clean
	rm -rf $(OBJDIR) $(CACHEF)

fclean: clean
	make -C $(LIBDIR) fclean
	rm -f $(NAME)

re: fclean all

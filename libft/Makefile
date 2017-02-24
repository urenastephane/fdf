# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: surena <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/12 14:25:11 by surena            #+#    #+#              #
#    Updated: 2017/02/22 16:20:41 by surena           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar
ARFLAG = rc


NAME = libft.a
SRCS = ft_lstdel.c ft_putnbr.c ft_strmap.c ft_lstdelone.c ft_putnbr_fd.c\
ft_strmapi.c ft_atoi.c ft_lstiter.c ft_putstr.c ft_strncat.c ft_bzero.c\
ft_lstmap.c ft_putstr_fd.c ft_strncmp.c ft_ft.c ft_lstnew.c ft_is_negative.c\
ft_strncpy.c ft_memalloc.c ft_strcat.c ft_strnequ.c\
ft_isalnum.c ft_memccpy.c ft_strchr.c ft_strnew.c ft_isalpha.c ft_memchr.c\
ft_strclr.c ft_strnstr.c ft_isascii.c ft_memcmp.c ft_strcmp.c ft_strrchr.c\
ft_isdigit.c ft_memcpy.c ft_strcpy.c ft_strrev.c ft_isprint.c ft_memdel.c\
ft_strdel.c ft_strsplit.c ft_isspace.c ft_memmove.c ft_strdup.c ft_strstr.c\
ft_itoa.c ft_memset.c ft_strequ.c\
ft_swap.c ft_striter.c ft_strsub.c ft_putchar.c\
ft_striteri.c ft_strtrim.c ft_putchar_fd.c ft_strjoin.c\
ft_tolower.c ft_putendl.c ft_strlcat.c ft_toupper.c\
ft_lstadd.c ft_putendl_fd.c ft_strlen.c\
ft_get_llintlen.c
OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) :
	$(GCC) -c $(CFLAGS) $(SRCS)
	$(AR) $(ARFLAG) $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 14:23:23 by alrobert          #+#    #+#              #
#    Updated: 2022/10/25 17:09:25 by alrobert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
SOURCE = ft_atoi.c \
	ft_isdigit.c \
	ft_memcpy.c \
	ft_putstr_fd.c \
	ft_strjoin.c \
	ft_strnstr.c \
	ft_bzero.c \
	ft_isprint.c \
	ft_memmove.c \
	ft_strlcat.c \
	ft_strrchr.c \
	ft_calloc.c \
	ft_itoa.c \
	ft_memset.c \
	ft_split.c \
	ft_strlcpy.c \
	ft_strtrim.c \
	ft_isalnum.c \
	ft_putchar_fd.c \
	ft_strchr.c \
	ft_strlen.c \
	ft_substr.c \
	ft_isalpha.c \
	ft_memchr.c \
	ft_putendl_fd.c \
	ft_strdup.c \
	ft_strmapi.c \
	ft_tolower.c \
	ft_isascii.c \
	ft_memcmp.c \
	ft_putnbr_fd.c \
	ft_striteri.c \
	ft_strncmp.c \
	ft_toupper.c
BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c
FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME):
	gcc $(SOURCE) libft.h -c $(FLAGS)
	ar rc libft.a ft_*.o
clean:
	@rm -f *.o
fclean: clean
	@rm -f $(NAME) $(NAME).so a.out
re: fclean all

run:
	@gcc main.c $(SOURCE) -o $(NAME) -lbsd
	@./$(NAME)
b_run:
	@gcc main.c $(SOURCE) $(BONUS) -o $(NAME) -lbsd
	@./$(NAME)
check:
	@gcc main.c $(SOURCE) $(BONUS) libft.h -o $(NAME) $(FLAGS)
#	@valgrind ./$(NAME)
debug:
	@gcc main.c $(SOURCE) $(BONUS) -o $(NAME) -g
	@gdb ./$(NAME)
bonus:
	gcc $(SOURCE) $(BONUS) libft.h -c $(FLAGS)
	ar rc libft.a ft_*.o
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SOURCE)
	gcc -nostartfiles -shared -o libft.so ft_*.o

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 14:23:23 by alrobert          #+#    #+#              #
#    Updated: 2022/10/14 17:45:12 by alrobert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
SOURCE = ft_*.c libft.h
FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME):
	gcc $(SOURCE) -c $(FLAGS)
	ar rc libft.a ft_*.o
clean:
	@rm -f *.o
fclean: clean
	@rm -f $(NAME)
re: fclean all

run:
	@gcc main.c $(SOURCE) -o $(NAME) -l bsd
	@./$(NAME)

check:
	@gcc main.c $(SOURCE) -o $(NAME) -l bsd $(FLAGS)
#	@valgrind ./$(NAME)

debug:
	@gcc main.c $(SOURCE) -o $(NAME) -g
	@gdb ./$(NAME)
so:
	gcc -fPIC $(FLAGS) $(SOURCE)
	gcc -shared -o libft.so ft_*.o

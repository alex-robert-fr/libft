# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 14:23:23 by alrobert          #+#    #+#              #
#    Updated: 2022/10/10 13:56:47 by alrobert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCRIPT_AUTHOR=Alex Robert

NAME = libft
SOURCE = ft_*.c libft.h
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@clear
	@gcc $(SOURCE) -c $(FLAGS)
	@ar rc libft.a ft_*.o
clean:
	@rm -f *.o
fclean: clean
	@rm -f $(NAME)
re: fclean all

run:
	@clear
	@gcc main.c $(SOURCE) -o $(NAME) -l bsd
	@./$(NAME)

check: 
	@clear
	@gcc main.c $(SOURCE) -o $(NAME) -l bsd $(FLAGS)
	@./$(NAME)

debug:
	@clear
	@gcc main.c $(SOURCE) -o $(NAME) -g -l bsd $(FLAGS)
	@gdb ./$(NAME)
so:
	@gcc -nostartfiles -fPIC $(FLAGS) $(SOURCE)
	@gcc -nostartfiles -shared -o libft.so ft_*.o

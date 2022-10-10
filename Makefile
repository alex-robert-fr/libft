# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alex <alex@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 14:23:23 by alrobert          #+#    #+#              #
#    Updated: 2022/10/09 15:56:43 by alex             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCRIPT_AUTHOR=Alex Robert

NAME = libft
SOURCE = ft_*.c libft.h

all: $(NAME)

$(NAME):
	clear
	@gcc $(SOURCE) -c -Wall -Wextra -Werror
	@ar rc libft.a ft_*.o
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all

run:
	clear
	@gcc main.c $(SOURCE) -o $(NAME) -l bsd
	@./$(NAME)

check: 
	clear
	@gcc main.c $(SOURCE) -o $(NAME) -l bsd -Wall -Wextra -Werror
	@./$(NAME)

debug:
	clear
	@gcc main.c $(SOURCE) -o $(NAME) -g -l bsd -Wall -Wextra -Werror
	@gdb ./$(NAME)


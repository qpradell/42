# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qpradell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 11:52:38 by qpradell          #+#    #+#              #
#    Updated: 2016/11/07 12:11:50 by qpradell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ft_display_file

SRC = ft_display_file.c

all: $(NAME)

$(NAME): 
	gcc -c -Wall -Werror -Wextra $(SRC)
	gcc -o $(NAME) ft_display_file.o

clean:
	/bin/rm -f ft_display_file.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

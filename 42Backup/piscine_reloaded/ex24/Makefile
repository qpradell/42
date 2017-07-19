# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qpradell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 07:35:59 by qpradell          #+#    #+#              #
#    Updated: 2016/11/07 08:58:13 by qpradell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c \
	  	srcs/ft_putstr.c \
	  	srcs/ft_strcmp.c \
	  	srcs/ft_strlen.c \
	  	srcs/ft_swap.c 

BIN = ft_putchar.o \
	  	ft_putstr.o \
	  	ft_strcmp.o \
	  	ft_strlen.o \
	  	ft_swap.o 

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC) -I includes/ && ar rc $(NAME) $(BIN)

clean:
	rm -f $(BIN)

fclean: clean
	rm -f $(NAME)

re: fclean all

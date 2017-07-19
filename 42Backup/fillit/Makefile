# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qpradell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/07 16:33:21 by qpradell          #+#    #+#              #
#    Updated: 2016/12/07 18:38:09 by qpradell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	fillit
CC			:=	gcc
CFLAGS		:=	-Wall -Wextra -Werror

SRCDIR		:=	sources
SRCFILES	:=	main.c \
				parse.c \
				check.c \
				solve.c \
				print.c
SRC			:=	$(addprefix $(SRCDIR)/, $(SRCFILES))

OBJDIR		:=	objects
OBJ			:=	$(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))

LIBFTDIR	:=	libft
LIBFTINCDIR	:=	$(LIBFTDIR)/includes
LIBFTFILE	:=	$(LIBFTDIR)/libft.a
LIBFT		:=	-L $(LIBFTDIR) -lft

INCDIR		:=	includes

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(NAME): $(LIBFTFILE) $(OBJ)
	@echo "Compiling" $(NAME)
	@$(CC) $(CFLAGS) $^ -o $@ -I $(INCDIR) $(LIBFT)

$(LIBFTFILE):
	@echo "Making libft.a"
	@make -C $(LIBFTDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@echo "Compiling" $@
	@$(CC) $(CFLAGS) -c -o $@ $< -I $(INCDIR) -I $(LIBFTINCDIR)

clean:
	@make -C $(LIBFTDIR) clean
	@echo "Cleaning" $(NAME)
	@/bin/rm -rf $(OBJDIR)


fclean:
	@echo "Deleting objects"
	@/bin/rm -rf $(OBJDIR)
	@make -C $(LIBFTDIR) fclean
	@echo "Deleting" $(NAME)
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

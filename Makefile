# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: event <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 14:50:27 by event             #+#    #+#              #
#    Updated: 2023/10/17 16:40:46 by event            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = $(wildcard ft_*.c)
OFILES = $(CFILES:.c=.o)
HEADERS = libft.h

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME) $(COMPILE)

$(COMPILE)%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@ -I $(HEADERS)

$(NAME): $(OFILES)
	ar -rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

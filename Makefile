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

CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c
OFILES = $(CFILES:.c=.o)


CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@

$(NAME): $(OFILES)
	ar -rcs $@ $^

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

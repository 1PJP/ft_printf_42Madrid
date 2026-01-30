# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/30 17:47:17 by jezambra          #+#    #+#              #
#    Updated: 2026/01/30 18:39:11 by jezambra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =	ft_printchr.c \

OBJ = $(SRC:.c=.o)

INCLUDE = libft.h
AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)
# bonus: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
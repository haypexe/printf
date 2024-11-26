# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akehili <akehili@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 16:33:22 by akehili           #+#    #+#              #
#    Updated: 2024/11/26 16:38:00 by akehili          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC =		ft_printf.c \
            ft_putchar.c \
            ft_putnbr.c \
            ft_putnbr_unsigned.c \
            ft_putptr.c \
            ft_putstr.c \
            ft_puthexa.c

TEST_SRC = main.c
TEST_OBJS = $(TEST_SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar crs

OBJS = $(SRC:.c=.o)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS) $(TEST_OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean clean-win fclean fclean-win re bonus custom
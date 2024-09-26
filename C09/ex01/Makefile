# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huburton <huburton@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 13:54:04 by huburton          #+#    #+#              #
#    Updated: 2024/09/26 16:14:25 by huburton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIB = libft.a

all : $(LIB)

$(LIB) : $(OBJS)
				ar rcs $(LIB) $(OBJS)

$(OBJS) :
		$(CC) $(FLAGS) -c -I./includes ${@:.o=.c} -o $@

clean :
				rm -f $(OBJS)

fclean : clean
				rm -f $(LIB)

re : fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huburton <huburton@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 09:09:47 by mwattier          #+#    #+#              #
#    Updated: 2024/09/25 19:57:22 by huburton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG = bsq

SRC = main.c utils.c utils1.c ft_check.c algo_utils.c read.c parsing.c algo.c 

SRCS = $(addprefix srcs/, ${SRC})

OBJS = $(SRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror -o 

RM = rm -f

all : $(PROG)

allup : all clean

$(PROG) : $(OBJS)
	$(CC) $(FLAGS) $(PROG) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(PROG)

re : fclean all

NAME = rush-02

SRCS = main.c str_utils.c

OBJS	= ${SRCS:.c=.o}

CC+FLAGS		= gcc -Werror -Wall -Wextra -o

RM		= rm -f

${NAME}:	${OBJS}
			${CC+FLAGS}  ${NAME}  ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
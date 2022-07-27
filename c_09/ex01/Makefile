CC = gcc
AR = ar rc
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror
SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
SRCSO = ./srcs/ft_putchar.o ./srcs/ft_putstr.o ./srcs/ft_strcmp.o ./srcs/ft_strlen.o ./srcs/ft_swap.o
HEADER = ./includes/ft.h
NAME = libft.a
RM = rm -f

.c.o:
			${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${SRCSO}

all:		${NAME}

clean:
			${RM} ${SRCSO}

fclean:
			${RM} ${SRCSO} ${NAME}

re:
			${RM} ${SRCSO} ${NAME}
			${OBJS}
			${AR} ${NAME} ${SRCSO}
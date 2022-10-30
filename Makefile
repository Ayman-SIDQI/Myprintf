NAME = libftprintf.a

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror

CFILES = ft_printf.c\
		 ft_putchar.c\
		 ft_putstr.c\
		 ft_putnbr.c\
		 ft_puthexm.c\
		 ft_puthexl.c\
		 ft_strlen.c\
		 ft_adress.c\
		 ft_unsigned.c

OBJ= ${CFILES:.c=.o}

all:	${NAME}
	
${NAME}: ${OBJ}
	ar -rc ${NAME} ${OBJ}

%.o: %.c
	${CC} ${FLAGS} -c $<

clean:
	${RM} ${OBJ}

fclean:
	${RM} -r ${OBJ} ${NAME}

re: clean all

.PHONY:all clean fclean re

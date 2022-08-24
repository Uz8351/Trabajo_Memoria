 
##*********************************
## mail   <mininoxeixo28@gmail.com>
## Iniciado   Mier 20 Julio 2022 16∶18∶02
## Finalizado lun 24 ago 2022 12∶03∶05  
## ************************************
## ----memoria.c

SRC	= src/main.c \
	
	
    
OBJ	= $(SRC:.c=.o)

NAME	= Trabajo_Memoria

RM	= rm -f

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror -Wno-format
CFLAGS	+= -pedantic-errors
CFLAGS	+= -I./include

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

##
## EPITECH PROJECT, 2021
## B-MAT-400-STG-4-1-205IQ-clement.muth [WSL: Ubuntu]
## File description:
## Makefile
##

CC	=	gcc

RM	=	rm -f

SRC	=	sources/main.c

NAME	=	208dowels

CFLAGS	=	-I./includes -g

LDFLAGS += -lm

LBLIBS	=	-L./bin/ -lstring -lcstring -llist
LIB_PATH	=	libs/

OBJS	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): lib $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LBLIBS) $(LDFLAGS)

lib:
	$(MAKE) -C $(LIB_PATH)

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIB_PATH) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIB_PATH) fclean

re: fclean all

.PHONY: all clean fclean re
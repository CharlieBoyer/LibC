##
## EPITECH PROJECT, 2019
## Personal Lib
## File description:
## tools.a
##

TOOLS =	./char_analyser.c \
		./error_output.c \
		./is_alpha.c \
		./my_get_nbr.c \
		./my_nbr_isneg.c \
		./my_putchar.c \
		./my_putnbr.c \
		./my_putstr.c \
		./my_revstr.c \
		./my_strcat.c \
		./my_strcmp.c \
		./my_strcpy.c \
		./my_strncpy.c \
		./my_strlen.c \
		./my_swap.c \
		./reset_index.c
		#./my_str_to_word_array.c \#

OBJ =	$(TOOLS:.c=.o)

LIB_NAME =	libtools.a

CFLAGS =	-W -Wall -Wextra
CFLAGS +=	-I../../include/tools_h

all: tools

tools: $(OBJ)
	ar rc $(LIB_NAME) $(OBJ)

clean:
	rm -f $(OBJ)

.PHONY: all clean

.SILENT: tools clean